using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class LoadingDotsManager : MonoBehaviour
{
    private const float DURATION = 1.5f;

    void Start()
    {
        Image[] circles = GetComponentsInChildren<Image>();
        Debug.Log(circles);
        for (var i = 0; i < circles.Length; i++)
        {
            circles[i].rectTransform.anchoredPosition = new Vector2(836f + (i * 21f), -458f);
            Sequence sequence = DOTween.Sequence()
                .SetLoops(-1, LoopType.Restart)
                .SetDelay((DURATION / 2) * ((float)i / circles.Length))
                .Append(circles[i].rectTransform.DOAnchorPosY(-445f, DURATION / 4))
                .Append(circles[i].rectTransform.DOAnchorPosY(-458f, DURATION / 4))
                .AppendInterval((DURATION / 2) * ((float)(1 - i) / circles.Length));
            sequence.Play();
        }
    }
}