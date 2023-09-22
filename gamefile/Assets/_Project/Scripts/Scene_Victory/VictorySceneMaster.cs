using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class VictorySceneMaster : MonoBehaviour
{
    public TransitionManager transitionManager;

    [SerializeField]
    private TextMeshProUGUI scoreText;
    [SerializeField]
    private TextMeshProUGUI playerNameText;

    private void Start()
    {
        scoreText.text = PlayerStatsManager.instance.lastScore.ToString()+ "pt";
        playerNameText.text = PlayerStatsManager.instance.playerName.ToString();
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            transitionManager.NextSceneLoad();
        }
    }
}
