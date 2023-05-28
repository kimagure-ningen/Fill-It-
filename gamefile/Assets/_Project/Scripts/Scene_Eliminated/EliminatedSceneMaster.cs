using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class EliminatedSceneMaster : MonoBehaviour
{
    public TransitionManager transitionManager;

    [SerializeField]
    private TextMeshProUGUI scoreText;

    private void Start()
    {
        scoreText.text = PlayerStatsManager.instance.lastScore.ToString();
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0)) {
            transitionManager.NextSceneLoad();
        }
    }
}
