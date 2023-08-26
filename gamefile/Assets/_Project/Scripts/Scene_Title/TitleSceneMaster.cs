using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.UI;

public class TitleSceneMaster : MonoBehaviourPunCallbacks
{
    public TransitionManager transitionManager;
    // public GameObject circle;
    public GameObject loadingDots;
    public Image blurPanel;

    private bool isConnected = false;

    private float blurOpacity = 1;

    private void Start()
    {
        isConnected = false;
        blurOpacity = 1;
        Color currentBlurCol = blurPanel.color;
        currentBlurCol.a = blurOpacity;
        blurPanel.color = currentBlurCol;
        loadingDots.SetActive(true);

        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        isConnected = true;
        loadingDots.SetActive(false);
        //circle.transform.DORotate(new Vector3(0f, 0f, 180f), 7f)
          //  .SetLoops(-1, LoopType.Restart)
          //  .SetEase(Ease.Linear);
    }

    private void Update()
    {
        if (isConnected == false)
        {
            return;
        }

        if (blurOpacity > 0)
        {
            blurOpacity -= .5f * Time.deltaTime;
            Color currentBlurCol = blurPanel.color;
            currentBlurCol.a = blurOpacity;
            blurPanel.color = currentBlurCol;
        }

        if (Input.GetMouseButtonDown(0))
        {
            transitionManager.NextSceneLoad();
        }
    }
}
