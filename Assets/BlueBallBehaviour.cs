using UnityEngine;
using System.Collections;

public class BlueBallBehaviour : MonoBehaviour {
	public GameObject Spawner;
	public GameObject ball;
	public GameObject greenball;
	public GameObject pinkball;
	public GameObject blueball;
	public GameObject yellowball;
	private Animator yellowballanimator;
	private Animator greenballanimator;
	private Animator pinkballanimator; 
	private Animator blueballanimator;


	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		Spawner = GameObject.Find ("Spawner");
		SpawnBallScript otherscript = Spawner.GetComponent<SpawnBallScript> ();
		if (transform.position.y <= -3.1) {
			Destroy (ball);
	}

}
	void OnCollisionEnter2D(Collision2D coll) {
		Debug.Log ("hit something");
		Spawner = GameObject.Find ("Spawner");
		SpawnBallScript otherscript = Spawner.GetComponent<SpawnBallScript> ();


		if (coll.gameObject.tag == "blueball") {
			Debug.Log ("Collided with blue ball");
			Debug.Log (otherscript.bluepressed);
			if (otherscript.bluepressed == true) {
				otherscript.score = otherscript.score + 1;

				//blueballanimator.Play("BlueBallDeathAnimation");
				Destroy(coll.gameObject);
			}
		}
		if (coll.gameObject.tag == "greenball") {
			Debug.Log ("Collided with green ball");

			if (otherscript.greenpressed == true) {
				otherscript.score = otherscript.score + 1;
				//greenballanimator.Play("GreenBallDeathAnimation");
				Destroy(coll.gameObject);




			}
		}
		if (coll.gameObject.tag == "pinkball") {
			Debug.Log ("Collided with pink ball");

			if (otherscript.pinkpressed == true) {
				otherscript.score = otherscript.score + 1;
				//pinkballanimator.Play("PinkBallDeathAnimation");
				Destroy(coll.gameObject);


			}
		}
		if (coll.gameObject.tag == "yellowball") {
			Debug.Log ("Collided with yellow ball");

			if (otherscript.yellowpressed == true) {
				otherscript.score = otherscript.score + 1;
				//yellowballanimator.Play("YellowBallDeathAnimation");
				Destroy(coll.gameObject);


			}
		}
	}
}
