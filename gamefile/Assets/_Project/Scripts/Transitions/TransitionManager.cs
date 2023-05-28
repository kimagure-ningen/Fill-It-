using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TransitionManager : MonoBehaviour
{
    [SerializeField]
    private GameObject startTransition;
    [SerializeField]
    private GameObject endTransition;

    [SerializeField]
    private bool isStartMenu = false;

    [SerializeField]
    private string nextScene;

    [SerializeField]
    private string previousScene;

    private float transitionTime = 0.5f;

    private void Start()
    {
        if (!isStartMenu)
        {
            StartCoroutine("LoadThisLevel");
        }
    }

    public void NextSceneLoad()
    {
        StartCoroutine("LoadNextLevel");
    }

    public void PreviousSceneLoad()
    {
        StartCoroutine("LoadPreviousLevel");
    }

    IEnumerator LoadThisLevel()
    {
        startTransition.SetActive(true);

        yield return new WaitForSeconds(transitionTime);

        startTransition.SetActive(false);
    }

    IEnumerator LoadNextLevel()
    {
        endTransition.SetActive(true);

        yield return new WaitForSeconds(transitionTime);

        SceneManager.LoadScene(nextScene);
    }

    IEnumerator LoadPreviousLevel()
    {
        endTransition.SetActive(true);

        yield return new WaitForSeconds(transitionTime);

        SceneManager.LoadScene(previousScene);
    }
}
