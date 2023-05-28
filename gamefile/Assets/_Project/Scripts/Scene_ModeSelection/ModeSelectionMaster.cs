using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using DG.Tweening;
using UnityEngine.SceneManagement;
using TMPro;

public class ModeSelectionMaster : MonoBehaviourPunCallbacks
{
    public TransitionManager transitionManager;
    public GameObject circle;
    [SerializeField]
    private TMP_InputField playerNameInput;

    private int roomSize = 5;

    private void Start()
    {
        circle.transform.DORotate(new Vector3(0f, 0f, 180f), 5f)
            .SetLoops(-1, LoopType.Restart);

        playerNameInput.text = PlayerStatsManager.instance.playerName;
    }

    public void NameInput()
    {
        PlayerStatsManager.instance.playerName = playerNameInput.text;
    }

    public void OnPvPButtonDown()
    {
        PhotonNetwork.NickName = PlayerStatsManager.instance.playerName;

        PhotonNetwork.JoinRandomRoom();
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        CreateRoom();
    }

    public override void OnJoinedRoom()
    {
        PhotonNetwork.IsMessageQueueRunning = false;

        transitionManager.NextSceneLoad();
    }

    private void CreateRoom()
    {
        int randomRoomNumber = Random.Range(0, 10000);
        RoomOptions roomOptions = new RoomOptions() { IsVisible = true, IsOpen = true, MaxPlayers = (byte)roomSize };
        PhotonNetwork.CreateRoom("Room" + randomRoomNumber, roomOptions);
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        // base.OnCreateRoomFailed(returnCode, message);
        Debug.Log("Failed to create room...");
        CreateRoom();
    }
}
