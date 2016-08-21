using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class SpawnBallScript : MonoBehaviour {

	public GameObject[] Balls;
	public float delay;
	public GameObject blueball;
	public GameObject greenball;
	public GameObject pinkball;
	public GameObject yellowball;
	public GameObject ballprefab;
	public GameObject blueindi;
	public GameObject yellowindi; 
	public GameObject greenindi;
	public GameObject pinkindi; 
	public GameObject circleindi;
	public GameObject AllBallFallingAnimation;
	public Text scoreLabel;
	public int score;
	public bool bluepressed;
	public bool pinkpressed;
	public bool greenpressed;
	public bool yellowpressed;




	// Use this for initialization
	void Start () {
		blueindi.SetActive (false);
		bluepressed = false;
			greenpressed = false;
		pinkpressed = false;
		yellowpressed = false;
		StartCoroutine (SpawnBall());	
	}
	
	// Update is called once per frame
	void Update () {
		scoreLabel.text = score.ToString ();

		
		//Blue Ball Code
		if (blueball.transform.position.y == -3.5) {
			Debug.Log ("blue ball in position");

			if (bluepressed == true) {
				Destroy (ballprefab);
			} else {

			}
		}

		//Yellow Ball Code
		if (yellowball.transform.position.y == -3.5) {
			Debug.Log ("yellow ball in position");

			if (yellowpressed == true) {
				Destroy (ballprefab);

			} else {

			}
		}

		//Pink Ball Code
		if (ballprefab.transform.position.y < -3.5 && ballprefab.transform.position.y > -5) {
			Debug.Log ("Pink ball in position");
			if (pinkpressed == true) {
				Destroy (ballprefab);

			} else {

			}
		}

		//Green Ball Code
		if (greenball.transform.position.y == -3.5) {
			Debug.Log ("green ball in position");

			if (greenpressed == true) {
				Destroy (ballprefab);

			} else {

			}
		}

		//BlueIndi Code
		if (bluepressed == true) {
			blueindi.SetActive (true);
		} else {
			blueindi.SetActive (false);
		}

		//YellowIndi Code
		if (yellowpressed == true) {

			yellowindi.SetActive (true);
		} else {
			yellowindi.SetActive (false);
		}

		//GreenIndi Code
		if (greenpressed == true) {

			greenindi.SetActive (true);
		} else {
			greenindi.SetActive (false);
		}

		//PinkIndi Code
		if (pinkpressed == true) {

			pinkindi.SetActive (true);
		} else {
			pinkindi.SetActive (false);
		}





		if (delay > 0.2) {
			delay = delay - 0.0001f;
		}

	
	}
	IEnumerator SpawnBall() {

		while (true) {
			ballprefab = (GameObject) Instantiate (Balls [Random.Range (0, Balls.Length)], transform.position, transform.rotation);

			yield return new WaitForSeconds (delay);
		}
	}

	public void BlueClicked() {
		bluepressed = true;
		pinkpressed = false;
		yellowpressed = false;
		greenpressed = false;
	}
	public void PinkClicked() {
		bluepressed = false;
		pinkpressed = true;
		yellowpressed = false;
		greenpressed = false;
	}
	public void GreenClicked() {
		bluepressed = false;
		pinkpressed = false;
		yellowpressed = false;
		greenpressed = true;
	}
	public void YellowClicked() {
		bluepressed = false;
		pinkpressed = false;
		yellowpressed = true;
		greenpressed = false;
	}
}
