// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
//
// public class LocalGrid : MonoBehaviour
// {
//     public bool isPath = false;
//
//     public int playerId;
//
//     private Player player;
//     
//     private void OnTriggerEnter2D(Collider2D collision)
//     {
//         if (isPath)
//         {
//             if (collision.gameObject.tag == nameof(Player))
//             {
//                 // int collisionId = collision.gameObject.GetComponent<PhotonView>().ViewID;
//                 // Debug.Log(collisionId);
//                 // if (collisionId != playerId)
//                 // {
//                 //     player = PhotonView.Find(playerId).gameObject.GetComponent<Player>();
//                 //     player.OnDeath();
//                 // }
//             }
//         } else
//         {
//             if (collision.gameObject.tag == nameof(Player))
//             {
//                 // int collisionId = collision.gameObject.GetComponent<PhotonView>().ViewID;
//                 // Debug.Log(collisionId);
//                 if (playerId == 0)
//                 {
//                     return;
//                 }
//                 if (collisionId != playerId)
//                 {
//                     Destroy(gameObject);
//                 }
//             }
//         }
//     }
// }
