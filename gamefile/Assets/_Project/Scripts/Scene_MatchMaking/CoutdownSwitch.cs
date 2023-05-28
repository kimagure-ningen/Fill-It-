using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class CoutdownSwitch : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    [SerializeField]
    private Image timer;

    [SerializeField]
    private GameObject timerText;

    [SerializeField]
    private GameObject cancelButton;

    private void Start()
    {
        timer.enabled = true;
        timerText.SetActive(true);
        cancelButton.SetActive(false);
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        timer.enabled = false;
        timerText.SetActive(false);
        cancelButton.SetActive(true);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        timer.enabled = true;
        timerText.SetActive(true);
        cancelButton.SetActive(false);
    }
}
