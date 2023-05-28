using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData
{
    public string playerName;

    public int highScore;

    public int lastScore;

    public GameData()
    {
        this.playerName = "";
        this.highScore = 0;
        this.lastScore = 0;
    }
}
