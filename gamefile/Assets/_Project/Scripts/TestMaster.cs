using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class TestMaster : MonoBehaviour
{
    [SerializeField]
    private GameObject battleRoyale;
    [SerializeField]
    private GameObject sandbox;
    [SerializeField]
    private GameObject comingSoon;

    private float expandSize = 1.1f;

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
}
