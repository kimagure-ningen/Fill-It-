using UnityEngine;
using TMPro;
using DG.Tweening;
using Photon.Pun;
using Photon.Realtime;

public class UnableToMatchMaster : MonoBehaviour
{
    public TransitionManager transitionManager;

    [SerializeField] private GameObject retryButton;
    
    private readonly float expandSize = 1.075f;
    
    public void RetryButtonHover()
    {
        retryButton.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
    }
    
    public void RetryButtonHoverExit()
    {
        retryButton.transform.DOScale(new Vector3(1.0f, 1.0f, 1.0f), .25f);
    }
    
    public void RetryButtonDown()
    {
        retryButton.transform.DOScale(new Vector3(0.9f, 0.9f, 0.9f), .25f);
        transitionManager.NextSceneLoad();
    }
    
    public void RetryButtonUp()
    {
        retryButton.transform.DOScale(new Vector3(expandSize, expandSize, expandSize), .25f);
    }
    
    public void BackButtonDown()
    {
        PhotonNetwork.Disconnect();
        transitionManager.PreviousSceneLoad();
    }
}
