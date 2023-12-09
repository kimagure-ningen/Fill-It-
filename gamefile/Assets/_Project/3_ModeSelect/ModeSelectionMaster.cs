using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using DG.Tweening;
using Photon.Pun;
using Photon.Realtime;

public class ModeSelectionMaster : MonoBehaviourPunCallbacks
{
    public TransitionManager transitionManager;
    [SerializeField]
    private GameObject battleRoyale;
    [SerializeField]
    private GameObject sandbox;
    [SerializeField]
    private GameObject comingSoon;
    [SerializeField]
    private GameObject battleRoyalePlay;
    [SerializeField]
    private GameObject sandboxPlay;

    private float expandSize = 1.075f;

    private int roomSize = 4;

    public void BattleRoyaleHover()
    {
        battleRoyale.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
    }
    public void BattleRoyaleHoverExit()
    {
        battleRoyale.transform.DOScale(new Vector3(1.0f, 1.0f, 1.0f), .25f);
    }
    public void SandboxHover()
    {
        sandbox.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
    }
    public void SandboxHoverExit()
    {
        sandbox.transform.DOScale(new Vector3(1.0f, 1.0f, 1.0f), .25f);
    }
    public void ComingSoonHover()
    {
        comingSoon.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
    }
    public void ComingSoonHoverExit()
    {
        comingSoon.transform.DOScale(new Vector3(1.0f, 1.0f, 1.0f), .25f);
    }

    public void BattleRoyalePlayHover()
    {
        battleRoyale.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
        battleRoyalePlay.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
    }
    public void BattleRoyalePlayHoverExit()
    {
        battleRoyalePlay.transform.DOScale(new Vector3(1.0f, 1.0f, 1.0f), .25f);
    }
    public void BattleRoyalePlayDown()
    {
        battleRoyalePlay.transform.DOScale(new Vector3(0.9f, 0.9f, 0.9f), .25f);

        PhotonNetwork.JoinRandomRoom();
    }
    public void BattleRoyalePlayUp()
    {
        battleRoyalePlay.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
    }

    public void SandboxPlayHover()
    {
        sandbox.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
        sandboxPlay.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
    }
    public void SandboxPlayHoverExit()
    {
        sandboxPlay.transform.DOScale(new Vector3(1.0f, 1.0f, 1.0f), .25f);
    }
    public void SandboxPlayDown()
    {
        sandboxPlay.transform.DOScale(new Vector3(0.9f, 0.9f, 0.9f), .25f);
        
        transitionManager.OptionSceneLoad();
    }
    public void SandboxPlayUp()
    {
        sandboxPlay.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
    }

    public void BackButtonDown()
    {
        transitionManager.PreviousSceneLoad();
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
        Debug.Log("Failed to create room...");
        CreateRoom();
    }
}
