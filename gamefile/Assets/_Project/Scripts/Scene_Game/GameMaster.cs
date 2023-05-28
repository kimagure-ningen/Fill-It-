using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;
using Photon.Pun;
using Photon.Realtime;

public class GameMaster : MonoBehaviourPunCallbacks
{
    [SerializeField]
    private GameObject gridParent;
    [SerializeField]
    private GameObject grid;

    private List<Color> playerColors;
    private List<Color> gridColors;
    private Vector3 playerBlue = new Vector3(20f / 255f, 102f / 255f, 231f / 255f);
    private Vector3 playerRed = new Vector3(255f / 255f, 71f / 255f, 78f / 255f);
    private Vector3 playerGreen = new Vector3(67f / 255f, 231f / 255f, 38f / 255f);
    private Vector3 gridBlue = new Vector3(47f / 255f, 102f / 255f, 169f / 255f);
    private Vector3 gridRed = new Vector3(212f / 255f, 55f / 255f, 60f / 255f);
    private Vector3 gridGreen = new Vector3(69f / 255f, 169f / 255f, 47f / 255f);

    public int gridNum = 100;

    public int playerSpawnX;
    public int playerSpawnY;

    private float elapsedTime;

    // GameObject型の二次元配列
    public GameObject[,] g_grids = new GameObject[100,100];

    private void Start()
    {
        PhotonNetwork.IsMessageQueueRunning = true;

        playerColors = new List<Color> { new Color(playerBlue.x, playerBlue.y, playerBlue.z),  new Color(playerRed.x, playerRed.y, playerRed.z), new Color(playerGreen.x, playerGreen.y, playerGreen.z) };
        gridColors = new List<Color> { new Color(gridBlue.x, gridBlue.y, gridBlue.z), new Color(gridRed.x, gridRed.y, gridRed.z), new Color(gridGreen.x, gridGreen.y, gridGreen.z) };

        g_grids = new GameObject[gridNum, gridNum];

        // マップ初期設定
        for (int x = 0; x < gridNum; x++)
        {
            for (int y = 0; y < gridNum; y++)
            {
                GameObject _grid = Instantiate(grid, new Vector2(x, y), Quaternion.identity);
                _grid.transform.parent = gridParent.transform;

                g_grids[x, y] = _grid;
            }
        }

        // プレイヤー生成
        playerSpawnX = Random.Range(2, gridNum - 2);
        playerSpawnY = Random.Range(2, gridNum - 2);

        if (playerColors.Count != gridColors.Count)
        {
            Debug.LogError("The number of player color and grid color is different");
        }

        int colorNum = Random.Range(0, gridColors.Count);

        object[] instanceData = new object[1];
        instanceData[0] = new Vector3(playerColors[colorNum].r, playerColors[colorNum].g, playerColors[colorNum].b);
        GameObject _player = PhotonNetwork.Instantiate("Player", new Vector2(playerSpawnX, playerSpawnY), Quaternion.identity,0,instanceData);

        _player.GetComponent<Player>().gameMaster = gameObject.GetComponent<GameMaster>();
        _player.GetComponent<Player>().gridParent = gridParent;

        _player.GetComponent<Player>().gridColor = gridColors[colorNum];

        playerColors.RemoveAt(colorNum);
        gridColors.RemoveAt(colorNum);
    }

    private void Update()
    {
        if (!PhotonNetwork.IsMasterClient)
        {
            return;
        }

        elapsedTime += Time.deltaTime;

        if (elapsedTime > 3f)
        {
            Vector2 orbSpawnPosition = new Vector2(Random.Range(0, 100), Random.Range(0,100));
            PhotonNetwork.InstantiateRoomObject("EnergyOrb", orbSpawnPosition, Quaternion.identity , 0);
            elapsedTime = 0f;
        }
    }
}