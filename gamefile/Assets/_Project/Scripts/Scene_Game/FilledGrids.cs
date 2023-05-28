using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using ExitGames.Client.Photon;

public class FilledGrids : MonoBehaviourPunCallbacks, IPunObservable
{
    private List<Vector2> gridPos = new List<Vector2>();
    private List<Vector2> receivedGridsPos = new List<Vector2>();

    [SerializeField]
    private GameObject grid;

    private Color sendGridColor;
    private Color receivedGridColor;

    private Vector3 normalScale = new Vector3(0.9f, 0.9f, 0.9f);
    private Vector3 pathScale = new Vector3(1f, 1f, 1f);

    public void OnNewGridFilled(Vector2 grid, Color gridColor)
    {
        gridPos.Add(grid);
        sendGridColor = gridColor;
    }

    void IPunObservable.OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            int currentGridCount = gridPos.Count;
            stream.SendNext(currentGridCount);
            stream.SendNext(sendGridColor.r);
            stream.SendNext(sendGridColor.g);
            stream.SendNext(sendGridColor.b);

            for (int i = 0; i < currentGridCount; i++)
            {
                Debug.Log(gridPos.Count);
                Debug.Log(currentGridCount);
                stream.SendNext(gridPos[0]);
                gridPos.RemoveAt(0);
            }
        } else
        {
            int gridQuantity = (int)stream.ReceiveNext();
            float rCol = (float)stream.ReceiveNext();
            float gCol = (float)stream.ReceiveNext();
            float bCol = (float)stream.ReceiveNext();
            receivedGridColor = new Color(rCol, gCol, bCol);

            for (int i = 0; i < gridQuantity; i++)
            {
                Vector2 _gridPosition = (Vector2)stream.ReceiveNext();
                receivedGridsPos.Add(_gridPosition);
            }

            InstantiateGrid();
        }
    }

    private void InstantiateGrid()
    {
        int receivedGridsPosCount = receivedGridsPos.Count;
        for (int i = 0; i < receivedGridsPosCount; i++)
        {
            GameObject _grid = Instantiate(grid, receivedGridsPos[0], Quaternion.identity);
            _grid.transform.SetParent(gameObject.transform);
            _grid.GetComponent<SpriteRenderer>().color = receivedGridColor;
            _grid.transform.localScale = normalScale;
            _grid.gameObject.tag = "EnemyGrid";
            receivedGridsPos.RemoveAt(0);
        }
    }
}
