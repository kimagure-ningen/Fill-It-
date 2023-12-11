using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;
using ExitGames.Client.Photon.StructWrapping;

public class LocalGameMaster : MonoBehaviour
{
    [SerializeField]
    private GameObject gridParent;
    [SerializeField]
    private GameObject grid;
    
    [SerializeField]
    private GameObject energyOrb;
    [SerializeField] 
    private GameObject playerObj;

    private List<Color> playerColors;
    private List<Color> gridColors;
    private readonly Vector3 playerBlue = new Vector3(20f / 255f, 102f / 255f, 231f / 255f);
    private readonly Vector3 playerRed = new Vector3(255f / 255f, 71f / 255f, 78f / 255f);
    private readonly Vector3 playerGreen = new Vector3(67f / 255f, 231f / 255f, 38f / 255f);
    private readonly Vector3 playerYellow = new Vector3(231f / 255f, 212f / 255f, 47f / 255f);

    private readonly Vector3 gridBlue = new Vector3(47f / 255f, 102f / 255f, 169f / 255f);
    private readonly Vector3 gridRed = new Vector3(212f / 255f, 55f / 255f, 60f / 255f);
    private readonly Vector3 gridGreen = new Vector3(69f / 255f, 169f / 255f, 47f / 255f);
    private readonly Vector3 gridYellow = new Vector3(195f / 255f, 176f / 255f, 19f / 255f);

    public int gridNum = 100;

    public int playerSpawnX;
    public int playerSpawnY;

    private readonly int playerCount = 2;

    private float elapsedTime;

    // GameObject型の二次元配列
    public GameObject[,] g_grids = new GameObject[100,100];
    
    private void Start()
    {
        playerColors = new List<Color> { new Color(playerBlue.x, playerBlue.y, playerBlue.z),  new Color(playerRed.x, playerRed.y, playerRed.z), new Color(playerGreen.x, playerGreen.y, playerGreen.z), new Color(playerYellow.x, playerYellow.y, playerYellow.z) };
        gridColors = new List<Color> { new Color(gridBlue.x, gridBlue.y, gridBlue.z), new Color(gridRed.x, gridRed.y, gridRed.z), new Color(gridGreen.x, gridGreen.y, gridGreen.z),  new Color(gridYellow.x, gridYellow.y, gridYellow.z) };

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

        // // プレイヤー生成
        // playerSpawnX = Random.Range(2, gridNum - 2);
        // playerSpawnY = Random.Range(2, gridNum - 2);
        //
        // if (playerColors.Count != gridColors.Count)
        // {
        //     Debug.LogError("The number of player color and grid color is different");
        // }
        //
        // int colorNum = Random.Range(0, gridColors.Count);
        //
        // GameObject _player = Instantiate(playerObj, new Vector2(playerSpawnX, playerSpawnY), Quaternion.identity);
        // _player.GetComponent<SpriteRenderer>().color = new Color(playerColors[colorNum].r, playerColors[colorNum].g, playerColors[colorNum].b);
        //
        // _player.GetComponent<LocalPlayer>().gameMaster = gameObject.GetComponent<LocalGameMaster>();
        // _player.GetComponent<LocalPlayer>().gridParent = gridParent;
        //
        // _player.GetComponent<LocalPlayer>().gridColor = gridColors[colorNum];
        //
        // playerColors.RemoveAt(colorNum);
        // gridColors.RemoveAt(colorNum);
        
        for (int i = 0; i <= playerCount - 1; i++)
        {
            playerSpawnX = Random.Range(2, gridNum - 2);
            playerSpawnY = Random.Range(2, gridNum - 2);

            int colorNum = Random.Range(0, gridColors.Count);

            GameObject _player = Instantiate(playerObj, new Vector2(playerSpawnX, playerSpawnY), Quaternion.identity);
            _player.GetComponent<SpriteRenderer>().color = new Color(playerColors[colorNum].r, playerColors[colorNum].g, playerColors[colorNum].b);

            _player.GetComponent<LocalPlayer>().gameMaster = gameObject.GetComponent<LocalGameMaster>();
            _player.GetComponent<LocalPlayer>().gridParent = gridParent;

            _player.GetComponent<LocalPlayer>().gridColor = gridColors[colorNum];
            
            _player.GetComponent<LocalPlayer>().playerId = i;

            playerColors.RemoveAt(colorNum);
            gridColors.RemoveAt(colorNum);
        }
    }

    private void Update()
    {
        elapsedTime += Time.deltaTime;

        if (elapsedTime > 3f)
        {
            Vector2 orbSpawnPosition = new Vector2(Random.Range(0, 100), Random.Range(0,100));
            Instantiate(energyOrb, orbSpawnPosition, Quaternion.identity);
            elapsedTime = 0f;
        }
    }
}
