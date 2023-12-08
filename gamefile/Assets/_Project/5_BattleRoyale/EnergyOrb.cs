using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class EnergyOrb : MonoBehaviour
{
    private void Start()
    {
        transform.DOScale(new Vector2(0.12f, 0.12f), 0.8f)
            .SetLoops(-1, LoopType.Yoyo);
    }
}
