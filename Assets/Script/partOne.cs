using System.Collections;
using System.Collections.Generic;
using System;

using Niantic.ARDK.AR;
using Niantic.ARDK.AR.Awareness;
using Niantic.ARDK.AR.Awareness.Depth;
using Niantic.ARDK.Extensions;
using Niantic.ARDK.Utilities;
using Niantic.ARDK.Utilities.Input.Legacy;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

using TMPro;

public class partOne : MonoBehaviour
{
    [SerializeField]
    private ARDepthManager _arDepthManager = null;

    [Header("Game Objects")]
    // Pointer to visualize where the user will place start and end points
    [SerializeField]
    private GameObject _pointer;

    private bool _isShowingDepths;
    private bool _isShowingPointCloud;

    // Game object to be place down at the start or end point of the measurement
    public GameObject PlacementObjectPf;
    public GameObject sidesObject;

    // A list of placed game objects to be destroyed in the OnDestroy method.
    private List<GameObject> _placedObjects = new List<GameObject>();

    // Whether the starting point was added to the environment
    public bool startPointAdded = false;

    // Position of starting point
    public Vector3 startPointPos;

    // AR Camera
    [SerializeField]
    private Camera arCamera;

    public GameObject button;
    public GameObject nextButton;

    public Message[] messages;
    public Message[] currentMessages;
    public TextMeshProUGUI messageText;
    public RectTransform backgroundBox;
    int activeMessage = 0;

    public GameObject demoObject;
    public GameObject demoFace;

    public GameObject formula1;
    public GameObject formula2;
    public GameObject formula3;
    public GameObject formula4;
    public GameObject formula5;

    public GameObject length;
    public GameObject width;
    public GameObject height;

    public GameObject equation;
    public TextMeshProUGUI total_text;
    public TMP_InputField input1;
    public TMP_InputField input2;
    public TMP_InputField input3;

    private void Start()
    {
        Application.targetFrameRate = 60;
        _arDepthManager.DepthBufferInitialized += OnDepthBufferInitialized;
        backgroundBox.gameObject.SetActive(false);
        messageText.gameObject.SetActive(false);
        nextButton.gameObject.SetActive(false);
        currentMessages = messages;

        instantiateGameObjects();
    }

    private void OnDepthBufferInitialized(ContextAwarenessArgs<IDepthBuffer> args)
    {
        _arDepthManager.DepthBufferInitialized -= OnDepthBufferInitialized;
    }

    // Update is called once per frame
    void Update()
    {
        setPositions();
        if (activeMessage == 11)
        {
            var total = int.Parse(input1.text) * int.Parse(input2.text) * int.Parse(input3.text);
            total_text.text = total.ToString();

            if (int.Parse(input1.text) == 7 && int.Parse(input2.text) == 7 && int.Parse(input3.text) == 7)
            {
                nextButton.SetActive(true);
            }
        }

    }

    // Add GameObjects to scene
    public void instantiateGameObjects()
    {
        _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
        _placedObjects.Add(Instantiate(sidesObject, Vector3.zero, Quaternion.identity));

        _placedObjects[0].gameObject.transform.localScale += new Vector3(-0.5f, -0.5f, -0.5f);
        _placedObjects[1].gameObject.transform.localScale += new Vector3(-0.5f, -0.5f, -0.5f);
        demoObject.transform.localScale += new Vector3(-0.5f, -0.5f, -0.5f);

        // Disable GameObjects so that they aren't initially visible
        _placedObjects[0].SetActive(false);
        _placedObjects[1].SetActive(false);
    }

    // Set positions of the GameObjects
    public void setPositions()
    {
        // Get Positions based on Depth
        var screenPosition = new Vector2(Screen.width / 2.0f, Screen.height / 2.0f);

        var worldPosition = _arDepthManager.DepthBufferProcessor.GetWorldPosition(
            (int)screenPosition.x,
            (int)screenPosition.y);

        var normal = _arDepthManager.DepthBufferProcessor.GetSurfaceNormal(
            (int)screenPosition.x,
            (int)screenPosition.y);

        var rotation = Quaternion.Slerp(
            _pointer.transform.rotation,
            Quaternion.FromToRotation(Vector3.up, normal),
            Time.deltaTime * 10.0f);

         _pointer.transform.position = worldPosition;
         _pointer.transform.rotation = rotation;
    }

    // Add start or end point to the environment
    public void addPoint()
    {
        _pointer.SetActive(false);
        _placedObjects[0].SetActive(true);
        _placedObjects[0].transform.position = new Vector3(_pointer.transform.position.x, _pointer.transform.position.y + 1, _pointer.transform.position.z);
        _placedObjects[0].transform.Rotate(0, 180, 0);
        button.SetActive(false);
        // _placedObjects[0].transform.LookAt(arCamera.transform);

        backgroundBox.gameObject.SetActive(true);
        messageText.gameObject.SetActive(true);
        nextButton.gameObject.SetActive(true);
        openDialogue(messages);
    }

    // Reset the measurement scenes
    public void reset()
    {
        for (int i = 0; i < _placedObjects.Count; i++)
        {
            _placedObjects[i].SetActive(false);
        }
        _pointer.SetActive(true);
    }

    public void openDialogue(Message[] messages)
    {
        currentMessages = messages;
        activeMessage = 0;

        Debug.Log("here");
        displayMessage();
    }

    void displayMessage()
    {
        Message messageToDisplay = currentMessages[activeMessage];
        messageText.text = messageToDisplay.message;
        Debug.Log(activeMessage);
        if (activeMessage == 5)
        {
            _placedObjects[1].transform.position = _placedObjects[0].transform.position;
            _placedObjects[1].transform.Rotate(0, 180, 0);
            _placedObjects[0].SetActive(false);
            _placedObjects[1].SetActive(true);
        }
        if (activeMessage == 6)
        {
            _placedObjects[1].SetActive(false);
            demoObject.SetActive(true);
            demoObject.transform.position = _placedObjects[1].transform.position;
            demoObject.transform.Rotate(0, 180, 0);

            formula2.SetActive(false);
            formula3.SetActive(false);
            formula4.SetActive(false);
            formula5.SetActive(false);

            length.SetActive(false);
            width.SetActive(false);
            height.SetActive(false);

        }
        if (activeMessage == 7)
        {
            formula1.SetActive(false);
            formula2.SetActive(true);
            length.SetActive(true);
        }
        if (activeMessage == 8)
        {
            formula2.SetActive(false);
            formula3.SetActive(true);
            length.SetActive(false);
            width.SetActive(true);
            Debug.Log("width");
        }
        if (activeMessage == 9)
        {
            Debug.Log("height");
            formula3.SetActive(false);
            formula4.SetActive(true);
            width.SetActive(false);
            height.SetActive(true);
        }
        if (activeMessage == 10)
        {
            formula4.SetActive(false);
            formula5.SetActive(true);
            width.SetActive(true);
            height.SetActive(true);
            length.SetActive(true);
        }
        if (activeMessage == 11)
        {
            equation.SetActive(true);
            nextButton.SetActive(false);
            input1.text = "0";
            input2.text = "0";
            input3.text = "0";
        }
        if (activeMessage == 12)
        {
            equation.SetActive(false);
            _placedObjects[0].SetActive(true);
            demoObject.SetActive(false);

        }
    }

    public void NextMessage()
    {
        activeMessage++;
        if (activeMessage < currentMessages.Length)
        {
            displayMessage();
        }
        else
        {
            Debug.Log("done");
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);

        }
    }
}


[System.Serializable]
public class Message
{
    public string message;
}