using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

public class MatchMakingMaster : MonoBehaviourPunCallbacks
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

    private void Start()
    {
        PhotonNetwork.IsMessageQueueRunning = true;

        PhotonNetwork.AutomaticallySyncScene = true;

        _photonView = GetComponent<PhotonView>();
        fullGameTimer = maxFullGameWaitTime;
        notFullGameTimer = maxWaitTime;
        readyGameTimer = maxReadyWaitTime;
        timerToStartGame = maxWaitTime;

        PlayerCountUpdate();
    }

    private void PlayerCountUpdate()
    {
        Debug.Log("PlayerCountUpdated");

        playerCount = PhotonNetwork.PlayerList.Length;
        roomSize = PhotonNetwork.CurrentRoom.MaxPlayers;
        roomCountText.text = playerCount + "/" + roomSize;

        if (playerCount == roomSize)
        {
            readyToStart = true;
        } else if (playerCount >= playerToStart)
        {
            readyToCountdown = true;
        } else
        {
            readyToStart = false;
            readyToCountdown = false;
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
        }　else if (readyToCountdown)
        {
            readyGameTimer -= Time.deltaTime;
            timerToStartGame = readyGameTimer;
        } else
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
            StartGame();
        }
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
        if(!PhotonNetwork.IsMasterClient)
        {
            return;
        }
        PhotonNetwork.CurrentRoom.IsOpen = false;
        PhotonNetwork.LoadLevel("GameScene");
    }

    public void CancelMatchMake()
    {
        PhotonNetwork.Disconnect();
        transitionManager.PreviousSceneLoad();
    }
}
