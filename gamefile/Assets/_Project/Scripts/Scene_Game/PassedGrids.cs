using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class PassedGrids : MonoBehaviourPunCallbacks, IPunObservable
{
    private List<Vector2> gridPos = new List<Vector2>();
    private List<Vector2> receivedGridsPos = new List<Vector2>();

    private List<GameObject> grids = new List<GameObject>();

    [SerializeField]
    private GameObject grid;

    public int playerViewId;

    private Color sendGridColor;
    private Color receivedGridColor;

    private Vector3 pathScale = new Vector3(1f, 1f, 1f);

    public void CheckViewID()
    {
        if (playerViewId != 0)
        {
            photonView.RPC(nameof(SyncOwner), RpcTarget.OthersBuffered, playerViewId);
        }
    }

    public void OnNewGridPassed(Vector2 grid, Color gridColor)
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
                receivedGridsPos.Add((Vector2)stream.ReceiveNext());
            }

            InstantiateGrid();
        }
    }

    private void InstantiateGrid()
    {
        for (int i = 0; i < receivedGridsPos.Count; i++)
        {
            GameObject _grid = Instantiate(grid, receivedGridsPos[0], Quaternion.identity);
            _grid.transform.SetParent(gameObject.transform);
            _grid.GetComponent<SpriteRenderer>().color = receivedGridColor;
            _grid.transform.localScale = pathScale;
            _grid.gameObject.tag = "EnemyGridPath";
            grids.Add(_grid);
            receivedGridsPos.RemoveAt(0);
        }
    }

    public void DeleteGrids()
    {
        photonView.RPC(nameof(RpcDeleteGrids), RpcTarget.All);
    }

    [PunRPC]
    private void RpcDeleteGrids()
    {
        int passedGridCount = grids.Count;
        for (int i = 0; i < passedGridCount; i++)
        {
            Destroy(grids[0]);
            grids.RemoveAt(0);
        }
    }

    [PunRPC]
    private void SyncOwner(int ownerId)
    {
        playerViewId = ownerId;
    }
}
