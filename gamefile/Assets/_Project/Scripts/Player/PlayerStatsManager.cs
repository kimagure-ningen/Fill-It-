using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStatsManager : MonoBehaviour, IDataPersistence
{
    public static PlayerStatsManager instance;

    public string playerName;

    public int highScore;

    public int lastScore;

    private void Awake()
    {
        instance = this;

        DontDestroyOnLoad(this.gameObject);
    }

    public void LoadData(GameData data)
    {
        this.playerName = data.playerName;
        this.highScore = data.highScore;
        this.lastScore = data.lastScore;
    }

    public void SaveData(ref GameData data)
    {
        data.playerName = this.playerName;
        data.highScore = this.highScore;
        data.lastScore = this.lastScore;
    }
}
