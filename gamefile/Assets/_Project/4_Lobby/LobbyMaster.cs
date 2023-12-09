using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using DG.Tweening;

public class LobbyMaster : MonoBehaviourPunCallbacks
{
    private PhotonView _photonView;

    [SerializeField]
    private TransitionManager transitionManager;

    private int playerCount;
    private int roomSize;

    [SerializeField]
    private int playerToStart = 2;

    [SerializeField]
    private TextMeshProUGUI roomCountText;

    [SerializeField]
    private Image timerFill;
    [SerializeField]
    private TextMeshProUGUI timerText;

    private bool readyToStart;
    private bool readyToCountdown;
    private bool startingGame;

    private float timerToStartGame;
    private float notFullGameTimer;
    private float readyGameTimer;
    private float fullGameTimer;

    [SerializeField]
    private float maxWaitTime;
    [SerializeField]
    private float maxReadyWaitTime;
    [SerializeField]
    private float maxFullGameWaitTime;

    [SerializeField]
    private TMP_InputField playerNameInput;

    [SerializeField]
    private GameObject leftArrow;
    [SerializeField]
    private GameObject rightArrow;
    [SerializeField]
    private GameObject saveButton;

    [SerializeField]
    private GameObject snakeHead;
    [SerializeField]
    private GameObject snakeBody;

    [Header("PlayerInfo")]
    [SerializeField]
    private Image playernum1;
    [SerializeField]
    private Image playernum2;
    [SerializeField]
    private Image playernum3;
    [SerializeField]
    private TextMeshProUGUI playertextnum1;
    [SerializeField]
    private TextMeshProUGUI playertextnum2;
    [SerializeField]
    private TextMeshProUGUI playertextnum3;

    List<Vector3> playerColors = new List<Vector3> { new Vector3(20f / 255f, 102f / 255f, 231f / 255f), new Vector3(255f / 255f, 71f / 255f, 78f / 255f), new Vector3(67f / 255f, 231f / 255f, 38f / 255f) };
    private int currentIndex = 1;

    private void Start()
    {
        PhotonNetwork.IsMessageQueueRunning = true;

        PhotonNetwork.AutomaticallySyncScene = true;

        _photonView = GetComponent<PhotonView>();
        fullGameTimer = maxFullGameWaitTime;
        notFullGameTimer = maxWaitTime;
        readyGameTimer = maxReadyWaitTime;
        timerToStartGame = maxWaitTime;

        playerNameInput.text = PlayerStatsManager.instance.playerName;
        PhotonNetwork.NickName = playerNameInput.text;

        PlayerCountUpdate();

        snakeHead.GetComponent<SpriteRenderer>().color = new Color(playerColors[currentIndex].x, playerColors[currentIndex].y, playerColors[currentIndex].z);
        snakeBody.GetComponent<SpriteRenderer>().color = new Color(playerColors[currentIndex].x, playerColors[currentIndex].y, playerColors[currentIndex].z);
    }

    private void PlayerCountUpdate()
    {
        Debug.Log("PlayerCountUpdated");

        playerCount = PhotonNetwork.PlayerList.Length;
        roomSize = PhotonNetwork.CurrentRoom.MaxPlayers;
        roomCountText.text = playerCount + "/" + roomSize + " players";

        if (playerCount == roomSize)
        {
            readyToStart = true;
        }
        else if (playerCount >= playerToStart)
        {
            readyToCountdown = true;
        }
        else
        {
            readyToStart = false;
            readyToCountdown = false;
        }

        if (playerCount <= 1)
        {
            playernum1.GetComponent<Image>().color = new Color(255f / 255f, 71f / 255f, 78f / 255f, 0.25f);
            playertextnum1.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 0.25f);
            playernum2.GetComponent<Image>().color = new Color(20f / 255f, 102f / 255f, 231f / 255f, 0.25f);
            playertextnum2.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 0.25f);
            playernum3.GetComponent<Image>().color = new Color(67f / 255f, 231f / 255f, 38f / 255f, 0.25f);
            playertextnum3.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 0.25f);
        }
        if (playerCount == 2)
        {
            playernum1.GetComponent<Image>().color = new Color(255f / 255f, 71f / 255f, 78f / 255f, 1f);
            playertextnum1.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 1f);
            if (PhotonNetwork.PlayerList[1].NickName != null)
            {
                playertextnum1.text = PhotonNetwork.PlayerList[1].NickName.ToString();
            }
            else
            {
                playertextnum1.text = "PlayerNo.2";
            }
            playernum2.GetComponent<Image>().color = new Color(20f / 255f, 102f / 255f, 231f / 255f, 0.25f);
            playertextnum2.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 0.25f);
            playernum3.GetComponent<Image>().color = new Color(67f / 255f, 231f / 255f, 38f / 255f, 0.25f);
            playertextnum3.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 0.25f);
        }
        if (playerCount == 3)
        {
            playernum1.GetComponent<Image>().color = new Color(255f / 255f, 71f / 255f, 78f / 255f, 1f);
            playertextnum1.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 1f);
            if (PhotonNetwork.PlayerList[1].NickName != null)
            {
                playertextnum1.text = PhotonNetwork.PlayerList[1].NickName.ToString();
            }
            else
            {
                playertextnum1.text = "PlayerNo.2";
            }
            playernum2.GetComponent<Image>().color = new Color(20f / 255f, 102f / 255f, 231f / 255f, 1f);
            playertextnum2.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 1f);
            playertextnum2.text = PhotonNetwork.PlayerList[2].NickName.ToString();
            playernum3.GetComponent<Image>().color = new Color(67f / 255f, 231f / 255f, 38f / 255f, 0.25f);
            playertextnum3.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 0.25f);
        }
        if (playerCount >= 4)
        {
            playernum1.GetComponent<Image>().color = new Color(255f / 255f, 71f / 255f, 78f / 255f, 1f);
            playertextnum1.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 1f);
            if (PhotonNetwork.PlayerList[1].NickName != null)
            {
                playertextnum1.text = PhotonNetwork.PlayerList[1].NickName.ToString();
            }
            else
            {
                playertextnum1.text = "PlayerNo.2";
            }
            playernum2.GetComponent<Image>().color = new Color(20f / 255f, 102f / 255f, 231f / 255f, 1f);
            playertextnum2.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 1f);
            playertextnum2.text = PhotonNetwork.PlayerList[2].NickName.ToString();
            playernum3.GetComponent<Image>().color = new Color(67f / 255f, 231f / 255f, 38f / 255f, 1f);
            playertextnum3.faceColor = new Color(205f / 255f, 207f / 255f, 205f / 255f, 1f);
            playertextnum3.text = PhotonNetwork.PlayerList[3].NickName.ToString();
        }
    }

    public override void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);

        PlayerCountUpdate();

        if (PhotonNetwork.IsMasterClient)
        {
            _photonView.RPC("RPC_SendTimer", RpcTarget.Others, timerToStartGame);
        }
    }

    [PunRPC]
    private void RPC_SendTimer(float timeIn)
    {
        timerToStartGame = timeIn;
        notFullGameTimer = timeIn;
        if (timeIn < readyGameTimer)
        {
            readyGameTimer = timeIn;
        }
        if (timeIn < fullGameTimer)
        {
            fullGameTimer = timeIn;
        }
    }

    public override void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    {
        PlayerCountUpdate();
        base.OnPlayerLeftRoom(otherPlayer);
    }

    private void Update()
    {
        WaitingForMorePlayers();
    }

    private void WaitingForMorePlayers()
    {
        if (playerCount < 1)
        {
            ResetTimer();
        }

        if (readyToStart)
        {
            fullGameTimer -= Time.deltaTime;
            timerToStartGame = fullGameTimer;
        }
        else if (readyToCountdown)
        {
            readyGameTimer -= Time.deltaTime;
            timerToStartGame = readyGameTimer;
        }
        else
        {
            notFullGameTimer -= Time.deltaTime;
            timerToStartGame = notFullGameTimer;
        }

        if (timerToStartGame > 0f)
        {
            timerText.text = Mathf.Floor(timerToStartGame).ToString() + "s";
            timerFill.fillAmount = Mathf.InverseLerp(0, maxWaitTime, timerToStartGame);
        }

        if (timerToStartGame <= 0f)
        {
            if (startingGame)
            {
                return;
            }

            if (playerCount < 2)
            {
                UnableToMatch();
            }
            else
            {
                PhotonNetwork.NickName = PlayerStatsManager.instance.playerName;
                StartGame();
            }
        }
    }

    public void NameInput()
    {
        PlayerStatsManager.instance.playerName = playerNameInput.text;
        PhotonNetwork.NickName = playerNameInput.text;
        PlayerCountUpdate();
    }

    private void ResetTimer()
    {
        timerToStartGame = maxWaitTime;
        notFullGameTimer = maxWaitTime;
        readyGameTimer = maxReadyWaitTime;
        fullGameTimer = maxFullGameWaitTime;
    }

    private void StartGame()
    {
        startingGame = true;
        if (!PhotonNetwork.IsMasterClient)
        {
            return;
        }
        PhotonNetwork.CurrentRoom.IsOpen = false;
        PhotonNetwork.LoadLevel("BattleRoyaleScene");
    }

    private void UnableToMatch()
    {
        startingGame = true;
        PhotonNetwork.CurrentRoom.IsOpen = false;
        PhotonNetwork.LeaveRoom();
        transitionManager.OptionSceneLoad();
    }

    public void SaveButtonHover()
    {
        saveButton.transform.DOScale(new Vector3(1.075f, 1.075f, 1.075f), .25f);
    }
    public void SaveButtonExit()
    {
        saveButton.transform.DOScale(new Vector3(1f, 1f, 1f), .25f);
    }
    public void SaveButtonClick()
    {
        saveButton.transform.DOScale(new Vector3(0.9f, 0.9f, 0.9f), .25f);
    }
     
    public void LeftArrowClick()
    {
        leftArrow.transform.DOScale(new Vector3(0.85f, 0.85f, 0.85f), .25f);
        if (currentIndex != 0)
        {
            currentIndex--;
            snakeHead.GetComponent<SpriteRenderer>().color = new Color(playerColors[currentIndex].x, playerColors[currentIndex].y, playerColors[currentIndex].z);
            snakeBody.GetComponent<SpriteRenderer>().color = new Color(playerColors[currentIndex].x, playerColors[currentIndex].y, playerColors[currentIndex].z);
        } else if(currentIndex == 0)
        {
            currentIndex = playerColors.Count - 1;
            snakeHead.GetComponent<SpriteRenderer>().color = new Color(playerColors[currentIndex].x, playerColors[currentIndex].y, playerColors[currentIndex].z);
            snakeBody.GetComponent<SpriteRenderer>().color = new Color(playerColors[currentIndex].x, playerColors[currentIndex].y, playerColors[currentIndex].z);
        } 
    }
    public void LeftArrowUp()
    {
        leftArrow.transform.DOScale(new Vector3(1f, 1f, 1f), .25f);
    }
    public void RightArrowClick()
    {
        rightArrow.transform.DOScale(new Vector3(0.85f, 0.85f, 0.85f), .25f);
        if (currentIndex != playerColors.Count - 1)
        {
            currentIndex++;
            snakeHead.GetComponent<SpriteRenderer>().color = new Color(playerColors[currentIndex].x, playerColors[currentIndex].y, playerColors[currentIndex].z);
            snakeBody.GetComponent<SpriteRenderer>().color = new Color(playerColors[currentIndex].x, playerColors[currentIndex].y, playerColors[currentIndex].z);
        } else if (currentIndex == playerColors.Count - 1)
        {
            currentIndex = 0;
            snakeHead.GetComponent<SpriteRenderer>().color = new Color(playerColors[currentIndex].x, playerColors[currentIndex].y, playerColors[currentIndex].z);
            snakeBody.GetComponent<SpriteRenderer>().color = new Color(playerColors[currentIndex].x, playerColors[currentIndex].y, playerColors[currentIndex].z);
        }
    }
    public void RightArrowUp()
    {
        rightArrow.transform.DOScale(new Vector3(1f, 1f, 1f), .25f);
    }
}
