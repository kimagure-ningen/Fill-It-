using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class Grid : MonoBehaviour
{
    public bool isPath = false;

    public int playerId;

    private Player player;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (isPath)
        {
            if (collision.gameObject.tag == nameof(Player))
            {
                int collisionId = collision.gameObject.GetComponent<PhotonView>().ViewID;
                Debug.Log(collisionId);
                if (collisionId != playerId)
                {
                    player = PhotonView.Find(playerId).gameObject.GetComponent<Player>();
                    player.OnDeath();
                }
            }
        }
    }
}
