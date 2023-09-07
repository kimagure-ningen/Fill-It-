using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using DG.Tweening;
using Photon.Pun;
using Photon.Realtime;
using Photon.Pun.UtilityScripts;
using UnityEngine.Rendering;
using UnityEngine.Rendering.PostProcessing;

public class Player : MonoBehaviourPunCallbacks
{
    public GameMaster gameMaster;
    public GameObject gridParent;

    public TransitionManager transitionManager;

    [SerializeField]
    private GameObject grid;

    private int gridNum;

    private GameObject filledGrids;

    private GameObject passedGrids;

    // int型の二次元配列
    private int[,] i_grids = new int[100,100];
    // 配列が 0 → 無占拠
    //       -1 → 陣地
    //       1 → 通った場所

    // プレイヤーの位置の二次元配列
    private bool[,] p_grids = new bool[100,100];
    // 配列が false → 無占拠
    //       true → プレイヤー

    private enum InputType
    {
        up,
        down,
        left,
        right
    }

    private InputType playerInput;
    private InputType playerDirection;

    private float speed = 0.3f;

    private List<Vector2> path_list;

    public Color gridColor;
    private Color grey = new Color(48f / 255f, 47f / 255f, 48f / 255f);
    private Vector3 normalScale = new Vector3(0.9f, 0.9f, 0.9f);
    private Vector3 pathScale = new Vector3(1f, 1f, 1f);

    private int score;
    [SerializeField]
    private TextMeshProUGUI scoreText;

    [SerializeField]
    private TextMeshProUGUI playerNameText;

    [SerializeField]
    private GameObject cinemachineCam;

    private float elapsedTime;

    [SerializeField]
    private PostProcessVolume postProcessingMaster;
    private Bloom ppBloomSettings;

    private void Start()
    {
        this.playerNameText.text = photonView.Owner.NickName;

        object[] receivedData = gameObject.GetComponent<PhotonView>().InstantiationData;
        Vector3 data = (Vector3)receivedData[0];
        gameObject.GetComponent<SpriteRenderer>().color = new Color(data.x, data.y, data.z);

        // 自身か確認
        if (!photonView.IsMine)
        {
            cinemachineCam.SetActive(false);
            scoreText.enabled = false;
            return;
        }

        Cursor.visible = false;

        transform.Find("MinimapPlayer").gameObject.GetComponent<SpriteRenderer>().color = new Color(data.x, data.y, data.z);

        transitionManager = GameObject.Find("Transitions").GetComponent<TransitionManager>();
        if (transitionManager == null)
        {
            Debug.LogError("Cannot find Gameobject called Transitions");
        }

        postProcessingMaster = GameObject.Find("PostProcessingMaster").GetComponent<PostProcessVolume>();
        if (postProcessingMaster == null)
        {
            Debug.LogError("Cannot find Gameobject called Post Processing Master");
        }

        postProcessingMaster.profile.TryGetSettings(out ppBloomSettings);

        gridNum = gameMaster.gridNum;

        // 配列・リスト初期設定
        i_grids = new int[gridNum, gridNum];
        p_grids = new bool[gridNum, gridNum];
        path_list = new List<Vector2>();

        if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC(nameof(MapSetup), RpcTarget.AllBuffered);
        }

        cinemachineCam.SetActive(true);

        score = 0;
        UpdateScore();

        // 塗ったマス保存するGameObject生成
        filledGrids = PhotonNetwork.Instantiate("FilledGrids", Vector2.zero, Quaternion.identity);

        // 通ったマス保存するGameObject生成
        passedGrids = PhotonNetwork.Instantiate("PassedGrids", Vector2.zero, Quaternion.identity);

        passedGrids.GetComponent<PassedGrids>().playerViewId = photonView.ViewID;
        passedGrids.GetComponent<PassedGrids>().CheckViewID();

        // 自陣作成
        int playerSpawnX = (int)gameObject.transform.position.x;
        int playerSpawnY = (int)gameObject.transform.position.y;

        for (int x = playerSpawnX - 1; x <= playerSpawnX + 1; x++)
        {
            for (int y = playerSpawnY - 1; y <= playerSpawnY + 1; y++)
            {
                i_grids[x, y] = -1;
                UpdateGridStatus(x, y);

                gameMaster.g_grids[x, y].transform.SetParent(filledGrids.transform);
                filledGrids.GetComponent<FilledGrids>().OnNewGridFilled(gameMaster.g_grids[x,y].transform.position, gridColor);
            }
        }

        score += 9;
        PhotonNetwork.LocalPlayer.UpdateScore(9);
        UpdateScore();

        p_grids[gameMaster.playerSpawnX, gameMaster.playerSpawnY] = true;

        playerInput = InputType.right;
        PlayerMovement();
    }

    private void Update()
    {
        if (!photonView.IsMine)
        {
            return;
        }

        CheckInput();
        CheckPlayerPos();

        elapsedTime += Time.deltaTime;
        if (elapsedTime > 0.5f)
        {
            elapsedTime = 0f;
            PhotonNetwork.LocalPlayer.UpdateScore(score);
        }
    }

    private void PlayerMovement()
    {
        if (playerInput == InputType.up)
        {
            playerDirection = InputType.up;
            gameObject.transform.DOLocalMove(new Vector2(gameObject.transform.position.x + 0f, gameObject.transform.position.y + 1f), speed)
                .OnComplete(MoveUp);
        }
        if (playerInput == InputType.down)
        {
            playerDirection = InputType.down;
            gameObject.transform.DOLocalMove(new Vector2(gameObject.transform.position.x + 0f, gameObject.transform.position.y + -1f), speed)
            .OnComplete(MoveDown);
        }
        if (playerInput == InputType.right)
        {
            playerDirection = InputType.right;
            gameObject.transform.DOLocalMove(new Vector2(gameObject.transform.position.x + 1f, gameObject.transform.position.y + 0f), speed)
            .OnComplete(MoveRight);
        }
        if (playerInput == InputType.left)
        {
            playerDirection = InputType.left;
            gameObject.transform.DOLocalMove(new Vector2(gameObject.transform.position.x + -1f, gameObject.transform.position.y + 0f), speed)
            .OnComplete(MoveLeft);
        }
    }

    private void MoveUp()
    {
        PlayerMovement();
        int posx = (int)gameObject.transform.position.x;
        int posy = (int)gameObject.transform.position.y;

        if (i_grids[posx, posy] == 1) // 今のマスが通った場所だったら
        {
            OnDeath();
            return;
        }

        if (i_grids[posx, posy] != -1) // 今のマスが陣地じゃなかったら
        {
            i_grids[posx, posy] = 1;
            p_grids[posx, posy - 1] = false;
            p_grids[posx, posy] = true;
            UpdateGridStatus(posx, posy);
            path_list.Add(new Vector2(posx, posy));

            gameMaster.g_grids[posx, posy].transform.SetParent(passedGrids.transform);
            gameMaster.g_grids[posx, posy].GetComponent<Grid>().playerId = photonView.ViewID;
            gameMaster.g_grids[posx, posy].GetComponent<Grid>().isPath = true;
            passedGrids.GetComponent<PassedGrids>().OnNewGridPassed(gameMaster.g_grids[posx, posy].transform.position, gridColor);
            return;
        }

        if (i_grids[posx, posy] == -1) // 今のマスが陣地だったら
        {
            if (i_grids[posx, posy - 1] != -1)
            {
                FillGrid();
                return;
            }
        }
    }

    private void MoveDown()
    {
        PlayerMovement();
        int posx = (int)gameObject.transform.position.x;
        int posy = (int)gameObject.transform.position.y;

        if (i_grids[posx, posy] == 1)
        {
            OnDeath();
            return;
        }

        if (i_grids[posx, posy] != -1)
        {
            i_grids[posx, posy] = 1;
            p_grids[posx, posy + 1] = false;
            p_grids[posx, posy] = true;
            UpdateGridStatus(posx, posy);
            path_list.Add(new Vector2(posx, posy));

            gameMaster.g_grids[posx, posy].transform.SetParent(passedGrids.transform);
            gameMaster.g_grids[posx, posy].GetComponent<Grid>().playerId = photonView.ViewID;
            gameMaster.g_grids[posx, posy].GetComponent<Grid>().isPath = true;
            passedGrids.GetComponent<PassedGrids>().OnNewGridPassed(gameMaster.g_grids[posx, posy].transform.position, gridColor);
            return;
        }

        if (i_grids[posx, posy] == -1)
        {
            if (i_grids[posx, posy + 1] != -1)
            {
                FillGrid();
                return;
            }
        }
    }

    private void MoveRight()
    {
        PlayerMovement();
        int posx = (int)gameObject.transform.position.x;
        int posy = (int)gameObject.transform.position.y;


        if (i_grids[posx, posy] == 1)
        {
            OnDeath();
            return;
        }

        if (i_grids[posx, posy] != -1)
        {
            i_grids[posx, posy] = 1;
            p_grids[posx - 1, posy] = false;
            p_grids[posx, posy] = true;
            UpdateGridStatus(posx, posy);
            path_list.Add(new Vector2(posx, posy));

            gameMaster.g_grids[posx, posy].transform.SetParent(passedGrids.transform);
            gameMaster.g_grids[posx, posy].GetComponent<Grid>().playerId = photonView.ViewID;
            gameMaster.g_grids[posx, posy].GetComponent<Grid>().isPath = true;
            passedGrids.GetComponent<PassedGrids>().OnNewGridPassed(gameMaster.g_grids[posx, posy].transform.position, gridColor);
            return;
        }

        if (i_grids[posx, posy] == -1)
        {
            if (i_grids[posx - 1, posy] != -1)
            {
                FillGrid();
                return;
            }
        }
    }

    private void MoveLeft()
    {
        PlayerMovement();
        int posx = (int)gameObject.transform.position.x;
        int posy = (int)gameObject.transform.position.y;

        if (i_grids[posx, posy] == 1)
        {
            OnDeath();
            return;
        }

        if (i_grids[posx, posy] != -1)
        {
            i_grids[posx, posy] = 1;
            p_grids[posx + 1, posy] = false;
            p_grids[posx, posy] = true;
            UpdateGridStatus(posx, posy);
            path_list.Add(new Vector2(posx, posy));

            gameMaster.g_grids[posx, posy].transform.SetParent(passedGrids.transform);
            gameMaster.g_grids[posx, posy].GetComponent<Grid>().playerId = photonView.ViewID;
            gameMaster.g_grids[posx, posy].GetComponent<Grid>().isPath = true;
            passedGrids.GetComponent<PassedGrids>().OnNewGridPassed(gameMaster.g_grids[posx, posy].transform.position, gridColor);
            return;
        }

        if (i_grids[posx, posy] == -1)
        {
            if (i_grids[posx + 1, posy] != -1)
            {
                FillGrid();
                return;
            }
        }
    }

    private void CheckInput()
    {
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            if (playerDirection == InputType.down)
            {
                return;
            }
            playerInput = InputType.up;
        }
        if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            if (playerDirection == InputType.up)
            {
                return;
            }
            playerInput = InputType.down;
        }
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            if (playerDirection == InputType.right)
            {
                return;
            }
            playerInput = InputType.left;
        }
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            if (playerDirection == InputType.left)
            {
                return;
            }
            playerInput = InputType.right;
        }
    }

    private void CheckPlayerPos()
    {
        if (gameObject.transform.position.x < 0 || gameObject.transform.position.x > gameMaster.gridNum - 1)
        {
            OnDeath();
        }
        if (gameObject.transform.position.y > gameMaster.gridNum - 1 || gameObject.transform.position.y < 0)
        {
            OnDeath();
        }
    }

    private void UpdateGridStatus(int x, int y)
    {
        if (i_grids[x, y] == 0)
        {
            gameMaster.g_grids[x, y].GetComponent<SpriteRenderer>().color = grey;
            gameMaster.g_grids[x, y].transform.localScale = normalScale;
        }
        if (i_grids[x, y] == -1)
        {
            gameMaster.g_grids[x, y].GetComponent<SpriteRenderer>().color = gridColor;
            gameMaster.g_grids[x, y].transform.localScale = normalScale;
        }
        if (i_grids[x, y] == 1)
        {
            gameMaster.g_grids[x, y].GetComponent<SpriteRenderer>().color = gridColor;
            gameMaster.g_grids[x, y].transform.localScale = pathScale;
        }
        if (i_grids[x, y] == 2)
        {
            gameMaster.g_grids[x, y].GetComponent<SpriteRenderer>().color = gridColor;
            gameMaster.g_grids[x, y].transform.localScale = normalScale;
        }
    }

    public void OnDeath()
    {
        Cursor.visible = true;

        PlayerStatsManager.instance.lastScore = score;

        if (score > PlayerStatsManager.instance.highScore)
        {
            PlayerStatsManager.instance.highScore = score;
        }

        Destroy(gameObject);

        Debug.Log("Player Died!");

        for (int x = 0; x < gameMaster.gridNum; x++)
        {
            for (int y = 0; y < gameMaster.gridNum; y++)
            {
                i_grids[x, y] = 0;
                UpdateGridStatus(x, y);
            }
        }

        PhotonNetwork.Disconnect();

        transitionManager.NextSceneLoad();
    }

    private void FillGrid()
    {
        // 囲んだ場所X,Yの最大・最小値
        float maxX = path_list[path_list.Count - 1].x;
        float minX = path_list[path_list.Count - 1].x;
        float maxY = path_list[path_list.Count - 1].y;
        float minY = path_list[path_list.Count - 1].y;

        for (int i = path_list.Count - 1; i >= 0; i--)
        {
            if (path_list[i].x > maxX)
            {
                maxX = path_list[i].x;
            }
            if (path_list[i].x < minX)
            {
                minX = path_list[i].x;
            }
            if (path_list[i].y > maxY)
            {
                maxY = path_list[i].y;
            }
            if (path_list[i].y < minY)
            {
                minY = path_list[i].y;
            }

        }

        // 囲んだ場所を大きく囲む長方形の頂点
        int fillMaxX = (int)maxX + 1;
        int fillMinX = (int)minX - 1;
        int fillMaxY = (int)maxY + 1;
        int fillMinY = (int)minY - 1;

        if (fillMaxX > gameMaster.gridNum - 1)
        {
            fillMaxX = (int)maxX;
        }
        if (fillMinX < 0)
        {
            fillMinX = (int)minX;
        }
        if (fillMaxY > gameMaster.gridNum - 1)
        {
            fillMaxY = (int)maxY;
        }
        if (fillMinY < 0)
        {
            fillMinY = (int)minY;
        }

        // 塗りつぶしの処理
        int rowX = (int)(maxX - minX);
        int rowY = (int)(maxY - minY);

        int fillRowX = fillMaxX - fillMinX;
        int fillRowY = fillMaxY - fillMinY;

        bool[,] fillingPos = new bool[fillRowX + 1, fillRowY + 1];

        for (int y = 0; y <= fillRowY; y++)
        {
            for (int x = 0; x <= fillRowX; x++)
            {
                fillingPos[x, y] = true;
            }
        }

        // 除外プログラム
        for (int y = 0; y <= fillRowY; y++)
        {
            for (int x = 0; x <= fillRowX; x++)
            {
                if (i_grids[x + fillMinX, y + fillMinY] == 0)
                {
                    fillingPos[x, y] = false;
                }
                else
                {
                    break;
                }
            }
        }

        for (int y = 0; y <= fillRowY; y++)
        {
            for (int x = fillRowX; x >= 0; x--)
            {
                if (i_grids[x + fillMinX, y + fillMinY] == 0)
                {
                    fillingPos[x, y] = false;
                } else
                {
                    break;
                }
            }
        }

        for (int x = 0; x <= fillRowX; x++)
        {
            for (int y = 0; y <= fillRowY; y++)
            {
                if (i_grids[x + fillMinX, y + fillMinY] == 0)
                {
                    fillingPos[x, y] = false;
                }
                else
                {
                    break;
                }
            }
        }

        for (int x = 0; x<= fillRowX; x++)
        {
            for (int y = fillRowY; y >= 0; y--)
            {
                if (i_grids[x + fillMinX, y + fillMinY] == 0)
                {
                    fillingPos[x, y] = false;
                }
                else
                {
                    break;
                }
            }
        }

        for (int k = 0; k <= fillRowX; k++)
        {
            for (int l = 0; l <= fillRowY; l++)
            {
                if (fillingPos[k, l] == true)
                {
                    if (i_grids[k + fillMinX, l + fillMinY] != -1)
                    {
                        score += 1;
                        UpdateScore();
                    }
                    i_grids[k + fillMinX, l + fillMinY] = -1;
                    UpdateGridStatus(k + fillMinX, l + fillMinY);
                    gameMaster.g_grids[k + fillMinX, l + fillMinY].transform.SetParent(filledGrids.transform);
                    gameMaster.g_grids[k + fillMinX, l + fillMinY].GetComponent<Grid>().isPath = false;
                    filledGrids.GetComponent<FilledGrids>().OnNewGridFilled(gameMaster.g_grids[k + fillMinX, l + fillMinY].transform.position, gridColor);
                }
                if (fillingPos[k, l] == false)
                {
                    i_grids[(int)(k + fillMinX), (int)(l + fillMinY)] = 0;
                    UpdateGridStatus((int)(k + fillMinX), (int)(l + fillMinY));
                }
            }
        }

        passedGrids.GetComponent<PassedGrids>().DeleteGrids();

        path_list.Clear();
    }

    private void UpdateScore()
    {
        scoreText.text = score.ToString();
    }

    [PunRPC]
    private void MapSetup()
    {
        for (int x = 0; x < gridNum; x++)
        {
            for (int y = 0; y < gridNum; y++)
            {
                i_grids[x, y] = 0;
                p_grids[x, y] = false;
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "PowerUps")
        {
            PhotonNetwork.Destroy(collision.gameObject);
            StartCoroutine("PowerUp");
        }
    }

    private IEnumerator PowerUp()
    {
        Debug.Log("Power Up!");
        ppBloomSettings.intensity.value = 10f;
        speed = 0.2f;
        yield return new WaitForSeconds(5f);
        ppBloomSettings.intensity.value = 2f;
        speed = 0.3f;
    }
}