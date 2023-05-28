using ExitGames.Client.Photon;
using Photon.Realtime;
using Photon.Pun;

public static class PhotonScore
{
    private const string ScoreKey = "Score";

    private static readonly Hashtable propsToSet = new ExitGames.Client.Photon.Hashtable();

    public static int GetScore(this Photon.Realtime.Player player)
    {
        return (player.CustomProperties[ScoreKey] is int score) ? score : 0;
    }

    public static void UpdateScore(this Photon.Realtime.Player player, int value)
    {
        propsToSet[ScoreKey] = value;
        player.SetCustomProperties(propsToSet);
        propsToSet.Clear();
    }
}