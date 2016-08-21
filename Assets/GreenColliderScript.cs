using UnityEngine;
using System.Collections;

public class GreenColliderScript : MonoBehaviour {
	public GameObject Spawner;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.gameObject.tag == "greenball") {
			Debug.Log ("Collided with green ball");

			Spawner = GameObject.Find ("Spawner");
			SpawnBallScript otherscript = Spawner.GetComponent<SpawnBallScript> ();

			otherscript.score = otherscript.score + 1;
			Destroy (coll.gameObject);

		} else {
			Debug.Log ("Game Over");


		}
	}
}
