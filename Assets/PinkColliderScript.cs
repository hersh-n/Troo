using UnityEngine;
using System.Collections;

public class PinkColliderScript : MonoBehaviour {
	
	public GameObject Spawner;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.gameObject.tag == "pinkball") {
			Debug.Log ("Collided with pink ball");

			Spawner = GameObject.Find ("Spawner");
			SpawnBallScript otherscript = Spawner.GetComponent<SpawnBallScript> ();

			otherscript.score = otherscript.score + 1;
			Destroy (coll.gameObject);
		} else {
			Debug.Log ("Game Over");


		}
	}
}
