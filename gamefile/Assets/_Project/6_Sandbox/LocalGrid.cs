using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LocalGrid : MonoBehaviour
{
    public bool isPath = false;

    public int playerId;

    public PlayerAgent player;

    private GameObject[] players;

    private void Start()
    {
        if (players == null)
        {
            players = GameObject.FindGameObjectsWithTag(nameof(Player));
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (isPath)
        {
            if (collision.gameObject.tag == nameof(Player))
            {
                int collisionId = collision.gameObject.GetComponent<PlayerAgent>().playerId;
                Debug.Log(collisionId);
                if (collisionId != playerId)
                {
                    Debug.Log("Hit by a player");
                    // player = PhotonView.Find(playerId).gameObject.GetComponent<Player>();
                    foreach (GameObject _player in players)
                    {
                        if (_player.GetComponent<PlayerAgent>().playerId == playerId)
                        {
                            player = _player.GetComponent<PlayerAgent>();
                        }
                    }
                    player.OnDeath();
                }
            }
        } else
        {
            if (collision.gameObject.tag == nameof(Player))
            {
                int collisionId = collision.gameObject.GetComponent<PlayerAgent>().playerId;
                if (playerId == 0)
                {
                    return;
                }
                if (collisionId != playerId)
                {
                    Destroy(gameObject);
                }
            }
        }
    }
}
