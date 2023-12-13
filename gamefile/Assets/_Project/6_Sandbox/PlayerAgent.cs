using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Sensors;

public class PlayerAgent : Agent
{
    public int agentId;
    public GameObject enemyPlayer;
    
    public override void CollectObservations(VectorSensor sensor)
    {
        sensor.AddObservation(this.transform.localPosition);
        sensor.AddObservation(enemyPlayer.transform.localPosition);
    }

    public void OnVictory()
    {
        AddReward(0.1f);
    }

    public override void OnActionReceived(ActionBuffers actionBuffers)
    {
        
    }
}
