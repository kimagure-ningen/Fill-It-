using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Sensors;
using UnityEngine.Rendering.PostProcessing;
using TMPro;
using DG.Tweening;
using UnityEngine.UI;

public class PlayerAgent : Agent
{
    public int playerId;
    public GameObject enemyPlayer;
    
    private float speed = 0.3f;
    private float elapsedTime;
    private int score;
    
    [SerializeField]
    private GameObject cinemachineCam;
    
    public TransitionManager transitionManager;
    
    [SerializeField]
    private PostProcessVolume postProcessingMaster;
    private Bloom ppBloomSettings;
    
    private InputType playerInput;
    private InputType playerDirection;
    private enum InputType
    {
        up,
        down,
        left,
        right
    }
    
    [Header("UI (Do not touch)")]
    [SerializeField]
    private TextMeshProUGUI playerNameText;
    [SerializeField]
    private TextMeshProUGUI scoreText;
    
    public GameObject gridParent;
    
    private List<Vector2> path_list;
    
    public Color gridColor;
    private Color grey = new Color(48f / 255f, 47f / 255f, 48f / 255f);
    private Vector3 normalScale = new Vector3(0.9f, 0.9f, 0.9f);
    private Vector3 pathScale = new Vector3(1f, 1f, 1f);
    
    private int gridNum;
    // マス情報
    private int[,] i_grids = new int[100,100];
    // 0 → 無占拠 / -1 → 陣地 / 1 → 通った場所

    // プレイヤー位置
    private bool[,] p_grids = new bool[100,100];
    // false → 無占拠 / true → プレイヤー
    
    [SerializeField]
    private GameObject _filledGrids;
    
    private GameObject filledGrids;

    [SerializeField]
    private GameObject _passedGrids;
    
    private GameObject passedGrids;
    
    public override void Initialize()
    {
        enemyPlayer = GameObject.Find("LocalPlayer");
        
        this.playerNameText.text = "SandboxPlayer";

        Cursor.visible = false;

        transform.Find("MinimapPlayer").gameObject.GetComponent<SpriteRenderer>().color = gameObject.GetComponent<SpriteRenderer>().color;

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

        // gridNum = gameMaster.gridNum;
        gridNum = LocalGameMaster.Instance.gridNum;

        // 配列・リスト初期設定
        i_grids = new int[gridNum, gridNum];
        p_grids = new bool[gridNum, gridNum];
        path_list = new List<Vector2>();

        cinemachineCam.SetActive(true);

        score = 0;
        UpdateScore();

        // 塗ったマス保存するGameObject生成
        filledGrids = Instantiate(_filledGrids, Vector2.zero, Quaternion.identity);

        // 通ったマス保存するGameObject生成
        passedGrids = Instantiate(_passedGrids, Vector2.zero, Quaternion.identity);

        // 自陣作成
        int playerSpawnX = (int)gameObject.transform.position.x;
        int playerSpawnY = (int)gameObject.transform.position.y;

        for (int x = playerSpawnX - 1; x <= playerSpawnX + 1; x++)
        {
            for (int y = playerSpawnY - 1; y <= playerSpawnY + 1; y++)
            {
                i_grids[x, y] = -1;
                UpdateGridStatus(x, y);

                LocalGameMaster.Instance.g_grids[x, y].transform.SetParent(filledGrids.transform);
            }
        }

        score += 9;
        UpdateScore();

        p_grids[LocalGameMaster.Instance.playerSpawnX, LocalGameMaster.Instance.playerSpawnY] = true;

        playerInput = InputType.right;
        PlayerMovement();
        Debug.Log("Initialized");
    }
    public override void OnEpisodeBegin()
    {
        Debug.Log("OnEpisodeBegin method called");
    }
    
    public override void CollectObservations(VectorSensor sensor)
    {
        sensor.AddObservation(this.transform.localPosition);
        // sensor.AddObservation(enemyPlayer.transform.localPosition);
        Debug.Log("CollectObservations method called");
    }

    public override void OnActionReceived(ActionBuffers actionBuffers)
    {
        Debug.Log("OnActionReceived method called");
        int action = (int)actionBuffers.DiscreteActions[0];
        Debug.Log(action);
        if (action == 0)
        {
            if (playerDirection == InputType.down)
            {
                return;
            }
            playerInput = InputType.up;
        }
        if (action == 1)
        {
            if (playerDirection == InputType.up)
            {
                return;
            }
            playerInput = InputType.down;
        }
        if (action == 2)
        {
            if (playerDirection == InputType.right)
            {
                return;
            }
            playerInput = InputType.left;
        }
        if (action == 3)
        {
            if (playerDirection == InputType.left)
            {
                return;
            }
            playerInput = InputType.right;
        }
        AddReward(0.01f);
    }
    
    public void OnVictory()
    {
        AddReward(2.0f);
        EndEpisode();
    }
    
    public override void Heuristic(in ActionBuffers actionsOut)
    {
        Debug.Log("Heuristic method called");
        
        var discreteActions = actionsOut.DiscreteActions;

        discreteActions[0] = 0;

        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            discreteActions[0] = 1;
        }
        if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            discreteActions[0] = 2;
        }
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            discreteActions[0] = 3;
        }
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            discreteActions[0] = 4;
        }
    }


    
    private void PlayerMovement()
    {
        if (playerInput == InputType.up)
        {
            Debug.Log("s");
            playerDirection = InputType.up;
            gameObject.transform.DOLocalMove(new Vector2(gameObject.transform.position.x + 0f, gameObject.transform.position.y + 1f), speed)
                .OnComplete(() => Move(InputType.up));
        }
        if (playerInput == InputType.down)
        {
            playerDirection = InputType.down;
            gameObject.transform.DOLocalMove(new Vector2(gameObject.transform.position.x + 0f, gameObject.transform.position.y + -1f), speed)
                .OnComplete(() => Move(InputType.down));
        }
        if (playerInput == InputType.right)
        {
            playerDirection = InputType.right;
            gameObject.transform.DOLocalMove(new Vector2(gameObject.transform.position.x + 1f, gameObject.transform.position.y + 0f), speed)
                .OnComplete(() => Move(InputType.right));
        }
        if (playerInput == InputType.left)
        {
            playerDirection = InputType.left;
            gameObject.transform.DOLocalMove(new Vector2(gameObject.transform.position.x + -1f, gameObject.transform.position.y + 0f), speed)
                .OnComplete(() => Move(InputType.left));
        }
    }

    private void Move(InputType direction)
    {
        Debug.Log(direction.ToString());
        Debug.Log("hi");
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
            switch (direction) 
            {
                case (InputType.up):
                    p_grids[posx, posy - 1] = false;
                    break;
                case(InputType.down):
                    p_grids[posx, posy + 1] = false;
                    break;
                case(InputType.right):
                    p_grids[posx - 1, posy] = false;
                    break;
                case(InputType.left):
                    p_grids[posx + 1, posy] = false;
                    break;
            }
            p_grids[posx, posy] = true;
            UpdateGridStatus(posx, posy);
            path_list.Add(new Vector2(posx, posy));
            
            LocalGameMaster.Instance.g_grids[posx, posy].transform.SetParent(passedGrids.transform);
            LocalGameMaster.Instance.g_grids[posx, posy].GetComponent<LocalGrid>().playerId = this.playerId;
            LocalGameMaster.Instance.g_grids[posx, posy].GetComponent<LocalGrid>().isPath = true;
            LocalGameMaster.Instance.g_grids[posx, posy].GetComponent<LocalGrid>().player = this;
            return;
        }
        
        if (i_grids[posx, posy] == -1)
        {
            int _posy = new int();
            switch (direction)
            {
                case(InputType.up):
                    _posy = posy + 1;
                    break;
                case (InputType.down):
                    _posy = posy - 1;
                    break;
                case(InputType.right):
                    _posy = posy + 1;
                    break;
                case(InputType.left):
                    _posy = posy - 1;
                    break;
            }
            if (i_grids[posx, _posy] != -1)
            {
                Debug.Log("Filling Grid");
                FillGrid();
                return;
            }
        }
    }
    
    private void CheckPlayerPos()
    {
        if (gameObject.transform.position.x < 0 || gameObject.transform.position.x > LocalGameMaster.Instance.gridNum - 1)
        {
            OnDeath();
        }
        if (gameObject.transform.position.y > LocalGameMaster.Instance.gridNum - 1 || gameObject.transform.position.y < 0)
        {
            OnDeath();
        }
    }
    
    private void UpdateGridStatus(int x, int y)
    {
        Color gridCol = LocalGameMaster.Instance.g_grids[x, y].GetComponent<SpriteRenderer>().color;
        Vector3 gridScale = LocalGameMaster.Instance.g_grids[x, y].transform.localScale;
        
        if (i_grids[x, y] == 0)
        {
            gridCol = grey;
            gridScale = normalScale;
        }
        if (i_grids[x, y] == -1)
        {
            gridCol = gridColor;
            gridScale = normalScale;
        }
        if (i_grids[x, y] == 1)
        {
            gridCol = gridColor;
            gridScale = pathScale;
        }
        if (i_grids[x, y] == 2)
        {
            gridCol = gridColor;
            gridScale = normalScale;
        }
    }

    public void OnDeath()
    {
        EndEpisode();
        Cursor.visible = true;

        LocalGameMaster.Instance.players.Remove(gameObject);
        
        Debug.Log(LocalGameMaster.Instance.players.Count);

        Destroy(gameObject);

        Debug.Log("Player" + playerId.ToString() + " Lose.");

        for (int x = 0; x < LocalGameMaster.Instance.gridNum; x++)
        {
            for (int y = 0; y < LocalGameMaster.Instance.gridNum; y++)
            {
                i_grids[x, y] = 0;
                UpdateGridStatus(x, y);
            }
        }

        
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

        if (fillMaxX > LocalGameMaster.Instance.gridNum - 1)
        {
            fillMaxX = (int)maxX;
        }
        if (fillMinX < 0)
        {
            fillMinX = (int)minX;
        }
        if (fillMaxY > LocalGameMaster.Instance.gridNum - 1)
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
                    LocalGameMaster.Instance.g_grids[k + fillMinX, l + fillMinY].transform.SetParent(filledGrids.transform);
                    LocalGameMaster.Instance.g_grids[k + fillMinX, l + fillMinY].GetComponent<LocalGrid>().isPath = false;
                    // filledGrids.GetComponent<FilledGrids>().OnNewGridFilled(gameMaster.g_grids[k + fillMinX, l + fillMinY].transform.position, gridColor);
                }
                if (fillingPos[k, l] == false)
                {
                    i_grids[(int)(k + fillMinX), (int)(l + fillMinY)] = 0;
                    UpdateGridStatus((int)(k + fillMinX), (int)(l + fillMinY));
                }
            }
        }

        path_list.Clear();
    }

    private void UpdateScore()
    {
        scoreText.text = score.ToString();
    }
    
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
            Destroy(collision.gameObject);
            
            StartCoroutine("PowerUp");
        }
    
        if (collision.gameObject.tag == "EnemyGrid")
        {
            Debug.Log("Destroying Grid");
            Destroy(collision.gameObject);
        }
    }

    private IEnumerator PowerUp()
    {
        ppBloomSettings.intensity.value = 10f;
        speed = 0.2f;
        yield return new WaitForSeconds(5f);
        ppBloomSettings.intensity.value = 2f;
        speed = 0.3f;
    }
}
