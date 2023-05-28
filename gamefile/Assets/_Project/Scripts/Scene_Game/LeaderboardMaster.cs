using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine.UI;
using System.Text;
using Photon.Pun.UtilityScripts;
using System;

public class LeaderboardMaster : MonoBehaviourPunCallbacks
{
    [SerializeField]
    private TextMeshProUGUI playerListText;

    private StringBuilder builder;

    private float elapsedTime;

    private void Start()
    {
        builder = new StringBuilder();
        elapsedTime = 0f;
    }

    private void Update()
    {
        if (!PhotonNetwork.InRoom) { return; }

        elapsedTime += Time.deltaTime;
        if (elapsedTime > 0.5f)
        {
            elapsedTime = 0f;
            UpdateLeaderboard();
        }
    }

    private void UpdateLeaderboard()
    {
        var players = PhotonNetwork.PlayerList;

        Array.Sort(
            players,
            (p1, p2) => {
                int diff = p2.GetScore() - p1.GetScore();
                if (diff != 0)
                {
                    return diff;
                }

                return p1.ActorNumber - p2.ActorNumber;
            }
        );

        builder.Clear();

        builder.AppendLine("LEADERBOARD");

        int boardNum = 1;

        foreach (var player in players)
        {
            builder.AppendLine($"{boardNum}. {player.NickName} {player.GetScore()}");
            boardNum++;
        }
        playerListText.text = builder.ToString();
    }
}
