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

using TMPro;

public class measurement : MonoBehaviour
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

    // Invisible virtual wall to use for raycasts
    public GameObject wall;

    // A list of placed game objects to be destroyed in the OnDestroy method.
    private List<GameObject> _placedObjects = new List<GameObject>();

    // Line to visualize measurement
    public LineRenderer lineRenderer;

    // Volume text
    public TextMeshPro mText;

    // First Side text
    public TextMeshPro firstSideText;

    // Second Side text
    public TextMeshPro secondSideText;

    // Third Side text
    public TextMeshPro thirdSideText;

    // Whether the starting point was added to the environment
    public bool startPointAdded = false;

    // Position of starting point
    public Vector3 startPointPos;

    // Whether the second point was added to the environment
    public bool secondPointAdded = false;

    // Position of second point
    public Vector3 secondPointPos;

    // Whether the third point was added to the environment
    public bool thirdPointAdded = false;

    // Position of third point
    public Vector3 thirdPointPos;

    // Whether the ending point was added to the environment
    public bool endPointAdded = false;

    // Position of the ending point
    public Vector3 endPointPos;

    // Previous world position
    public Vector3 prevPos;

    public bool wallRotated = false;

    // AR Camera
    [SerializeField]
    private Camera arCamera;

    [SerializeField]
    private float measurementFactor = 39.37f;

    [SerializeField]
    private Vector3 offsetMeasurement = Vector3.zero;

    private int pointNum = 0;

    public TextMeshProUGUI instructions1;
    public TextMeshProUGUI instructions2;
    public TextMeshProUGUI instructions3;
    public TextMeshProUGUI instructions4;

    public GameObject dialogueBox;
    public TextMeshProUGUI message;
    public GameObject nextButton;

    bool clicker;

    private void Start()
    {
        Application.targetFrameRate = 60;
        _arDepthManager.DepthBufferInitialized += OnDepthBufferInitialized;
        instructions1.gameObject.SetActive(true);
        instructions2.gameObject.SetActive(false);

        instantiateGameObjects();
        clicker = false;
    }

    private void OnDepthBufferInitialized(ContextAwarenessArgs<IDepthBuffer> args)
    {
        _arDepthManager.DepthBufferInitialized -= OnDepthBufferInitialized;
    }

    // Update is called once per frame
    void Update()
    {
        setPositions();

    }

    // Add GameObjects to scene
    public void instantiateGameObjects()
    {
        _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
        _placedObjects.Add(Instantiate(wall, Vector3.zero, Quaternion.identity));
        _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
        _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
        _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
        _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
        _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
        _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
        _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));

        // Disable GameObjects so that they aren't initially visible
        _placedObjects[0].SetActive(false);
        _placedObjects[1].SetActive(false);
        _placedObjects[2].SetActive(false);
        _placedObjects[3].SetActive(false);
        _placedObjects[4].SetActive(false);
        _placedObjects[5].SetActive(false);
        _placedObjects[6].SetActive(false);
        _placedObjects[7].SetActive(false);
        _placedObjects[8].SetActive(false);

        mText.gameObject.SetActive(false);
        firstSideText.gameObject.SetActive(false);
        secondSideText.gameObject.SetActive(false);
        thirdSideText.gameObject.SetActive(false);
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

        // If the first point was added, get positions based on raycast,
        // only translate the pointer along the y axis, and insert line to
        // visualize length
        if (startPointAdded == true)
        {
            if (thirdPointAdded == false && secondPointAdded == true)
            {
                // Nothing
            }
            else if (thirdPointAdded == false)
            {
                _placedObjects[1].transform.LookAt(arCamera.transform);
            }
            else if (thirdPointAdded == true && wallRotated == false)
            {
                wallRotated = true;
                _placedObjects[1].transform.Rotate(0, 90, 0);
            }

            // Raycast onto a the vertical virtual wall to get y-pos
            Ray ray = arCamera.ScreenPointToRay(screenPosition);
            RaycastHit hitObject;
            if (Physics.Raycast(ray, out hitObject))
            {
                if (secondPointAdded == false && thirdPointAdded == false && endPointAdded == false)
                {
                    // Up or down
                    worldPosition = new Vector3(_placedObjects[0].transform.position.x, hitObject.point.y, _placedObjects[0].transform.position.z);
                }

                else if (secondPointAdded == true && thirdPointAdded == false && endPointAdded == false)
                {
                    //Left or Right
                    // worldPosition = new Vector3(hitObject.point.x, _placedObjects[2].transform.position.y, _placedObjects[2].transform.position.z);
                    _placedObjects[1].transform.LookAt(arCamera.transform);
                    worldPosition = new Vector3(hitObject.point.x, _placedObjects[2].transform.position.y, hitObject.point.z);
                }

                else
                {
                    // Forward or Backwards
                    _placedObjects[1].transform.LookAt(arCamera.transform);
                    worldPosition = new Vector3(hitObject.point.x, _placedObjects[2].transform.position.y, hitObject.point.z);
                    //worldPosition = new Vector3(_placedObjects[3].transform.position.x, _placedObjects[3].transform.position.y, arCamera.transform.position.z);
                }

                //worldPosition = new Vector3(hitObject.point.x, hitObject.point.y, hitObject.point.z);

                // Ensure previous world position is only updated based on
                // raycast
                prevPos = worldPosition;
            }
            else
            {
                if (thirdPointAdded && endPointAdded == false)
                {
                    worldPosition = new Vector3(_placedObjects[3].transform.position.x, _placedObjects[3].transform.position.y, arCamera.transform.position.z);
                }
                else if (prevPos != null)
                {
                    worldPosition = prevPos;
                }
            }
            // Re-render line with appropriate length

            if (startPointAdded == true)
            {
                if (endPointAdded == true)
                {
                    lineRenderer.SetPosition(3, _placedObjects[4].transform.position);
                    lineRenderer.SetPosition(4, _placedObjects[5].transform.position);
                    lineRenderer.SetPosition(5, _placedObjects[6].transform.position);
                    lineRenderer.SetPosition(6, _placedObjects[7].transform.position);
                    lineRenderer.SetPosition(7, _placedObjects[8].transform.position);

                    lineRenderer.SetPosition(8, _placedObjects[1].transform.position);
                    lineRenderer.SetPosition(9, _placedObjects[6].transform.position);
                    lineRenderer.SetPosition(10, _placedObjects[5].transform.position);
                    lineRenderer.SetPosition(11, _placedObjects[2].transform.position);

                    lineRenderer.SetPosition(12, _placedObjects[3].transform.position);
                    lineRenderer.SetPosition(13, _placedObjects[8].transform.position);
                    lineRenderer.SetPosition(14, _placedObjects[7].transform.position);
                    lineRenderer.SetPosition(15, _placedObjects[4].transform.position);
                }
                else if (thirdPointAdded == true)
                {
                    lineRenderer.SetPosition(2, _placedObjects[3].transform.position);
                    lineRenderer.SetPosition(3, worldPosition);
                }
                else if (secondPointAdded == true)
                {
                    lineRenderer.SetPosition(1, _placedObjects[2].transform.position);
                    lineRenderer.SetPosition(2, worldPosition);
                }
                else
                {
                    lineRenderer.SetPosition(0, _placedObjects[1].transform.position);
                    lineRenderer.SetPosition(1, worldPosition);
                }
            }
            Debug.Log(_placedObjects[1].transform.rotation); 
        }

        // Update pointer position while measuring
        if (endPointAdded == false)
        {
            _pointer.transform.position = worldPosition;
            //_pointer.transform.rotation = rotation;
            _pointer.transform.LookAt(arCamera.transform);
        }
    }

    // Add start or end point to the environment
    public void addPoint()
    {

        // Add end point to scene and add distance text
        if (startPointAdded == true)
        {
            if (thirdPointAdded == true)
            {
                instructions4.gameObject.SetActive(false);
                pointNum++;
                _placedObjects[4].SetActive(true);
                endPointPos = _pointer.transform.position;
                _placedObjects[4].transform.position = endPointPos;
                endPointAdded = true;
                addDistanceText();

                _placedObjects[5].SetActive(true);
                _placedObjects[6].SetActive(true);
                _placedObjects[7].SetActive(true);
                _placedObjects[8].SetActive(true);

                _placedObjects[5].transform.position = new Vector3(_placedObjects[2].transform.position.x, _placedObjects[4].transform.position.y, _placedObjects[4].transform.position.z);
                _placedObjects[6].transform.position = new Vector3(_placedObjects[1].transform.position.x, _placedObjects[1].transform.position.y, _placedObjects[5].transform.position.z);
                _placedObjects[7].transform.position = new Vector3(_placedObjects[4].transform.position.x, _placedObjects[6].transform.position.y, _placedObjects[6].transform.position.z);
                _placedObjects[8].transform.position = new Vector3(_placedObjects[3].transform.position.x, _placedObjects[1].transform.position.y, _placedObjects[1].transform.position.z);

                pointNum = 8;
                lineRenderer.positionCount = 16;

                // Remove pointer after measurement is complete
                _pointer.SetActive(false);

                dialogueBox.SetActive(true);
                message.gameObject.SetActive(true);
                nextButton.SetActive(true);
            }
            else if (secondPointAdded == true)
            {
                instructions3.gameObject.SetActive(false);
                instructions4.gameObject.SetActive(true);
                pointNum++;
                _placedObjects[3].SetActive(true);
                thirdPointPos = _pointer.transform.position;
                _placedObjects[3].transform.position = thirdPointPos;
                thirdPointAdded = true;
                drawLine();
            }
            else
            {
                instructions2.gameObject.SetActive(false);
                instructions3.gameObject.SetActive(true);
                pointNum++;
                _placedObjects[2].SetActive(true);
                secondPointPos = _pointer.transform.position;
                _placedObjects[2].transform.position = secondPointPos;
                secondPointAdded = true;
                drawLine();
            }
        }

        // Add start point to scene and render measuring line
        if (startPointAdded == false)
        {
            pointNum++;

            _placedObjects[0].SetActive(true);
            startPointPos = _pointer.transform.position;
            _placedObjects[0].transform.position = startPointPos;

            // Add invisible virtual wall to scene after adding the startpoint
            _placedObjects[1].SetActive(true);
            _placedObjects[1].transform.position = _pointer.transform.position;

            startPointAdded = true;

            drawLine();

            // Disable occlusion after adding start point
            _arDepthManager.OcclusionTechnique = ARDepthManager.OcclusionMode.None;

            instructions1.gameObject.SetActive(false);
            instructions2.gameObject.SetActive(true);
        }
    }

    // Draw line between start and end point with height measurement
    public void drawLine()
    {
        lineRenderer.positionCount = pointNum + 1;
    }

    // Add text with distance measurement
    public void addDistanceText()
    {
        // Set the position, rotation, and content of distance text
        var halfWay = (startPointPos + endPointPos) / 2f;
        mText.gameObject.SetActive(true);
        mText.transform.position = new Vector3(halfWay.x, halfWay.y, halfWay.z);

        var halfWay1 = (startPointPos + secondPointPos) / 2f;
        firstSideText.gameObject.SetActive(true);
        firstSideText.transform.position = new Vector3(halfWay1.x, halfWay1.y, halfWay1.z);

        var halfWay2 = (secondPointPos + thirdPointPos) / 2f;
        secondSideText.gameObject.SetActive(true);
        secondSideText.transform.position = new Vector3(halfWay2.x, halfWay2.y, halfWay2.z);

        var halfWay3 = (thirdPointPos + endPointPos) / 2f;
        thirdSideText.gameObject.SetActive(true);
        thirdSideText.transform.position = new Vector3(halfWay3.x, halfWay3.y, halfWay3.z);


        // Make text face the camera
        Quaternion lookRotation = Quaternion.LookRotation((mText.transform.position - arCamera.transform.position).normalized);
        mText.transform.rotation = Quaternion.Euler(0, lookRotation.eulerAngles.y, lookRotation.eulerAngles.z);

        Quaternion lookRotation1 = Quaternion.LookRotation((firstSideText.transform.position - arCamera.transform.position).normalized);
        firstSideText.transform.rotation = Quaternion.Euler(0, lookRotation1.eulerAngles.y, lookRotation1.eulerAngles.z);

        Quaternion lookRotation2 = Quaternion.LookRotation((secondSideText.transform.position - arCamera.transform.position).normalized);
        secondSideText.transform.rotation = Quaternion.Euler(0, lookRotation2.eulerAngles.y, lookRotation2.eulerAngles.z);

        Quaternion lookRotation3 = Quaternion.LookRotation((thirdSideText.transform.position - arCamera.transform.position).normalized);
        thirdSideText.transform.rotation = Quaternion.Euler(0, lookRotation3.eulerAngles.y, lookRotation3.eulerAngles.z);

        var firstSideDistance = (Vector3.Distance(startPointPos, secondPointPos) * measurementFactor) / 12;
        var secondSideDistance = (Vector3.Distance(secondPointPos, thirdPointPos) * measurementFactor) / 12;
        var thirdSideDistance = (Vector3.Distance(thirdPointPos, endPointPos) * measurementFactor) / 12;

        var volume = firstSideDistance * secondSideDistance * thirdSideDistance;
        mText.text = $"Volume: {volume.ToString("F2")} ft^3";
        firstSideText.text = $"{firstSideDistance.ToString("F2")} ft";
        secondSideText.text = $"{secondSideDistance.ToString("F2")} ft";
        thirdSideText.text = $"{thirdSideDistance.ToString("F2")} ft";
        message.text = $"V = {firstSideDistance.ToString("F2")} *  {secondSideDistance.ToString("F2")} * {thirdSideDistance.ToString("F2")} = {volume.ToString()} ft^3. The volume of your shape is {volume.ToString()} feet cubed!";

        //var distance = (Vector3.Distance(startPointPos, endPointPos) * measurementFactor) / 12;
        //var feet = Math.Truncate(distance);
        //var inches = Math.Truncate((distance - feet) * 12);

        //mText.text = $"Distance: {feet.ToString()} ft {inches.ToString()} in";
    }

    // Reset the measurement scenes
    public void reset()
    {
        lineRenderer.positionCount = 0;
        for (int i = 0; i < _placedObjects.Count; i++)
        {
            _placedObjects[i].SetActive(false);
        }
        if (mText != null)
        {
            mText.gameObject.SetActive(false);
            firstSideText.gameObject.SetActive(false);
            secondSideText.gameObject.SetActive(false);
            thirdSideText.gameObject.SetActive(false);
        }
        startPointAdded = false;
        secondPointAdded = false;
        thirdPointAdded = false;
        endPointAdded = false;
        pointNum = 0;
        _pointer.SetActive(true);
        instructions1.gameObject.SetActive(true);
        instructions2.gameObject.SetActive(false);
        instructions3.gameObject.SetActive(false);
        instructions4.gameObject.SetActive(false);
    }

    public void NextMessage()
    {
        if (clicker == false)
        {
            clicker = true;
            message.text = "Find another rectangular prism and measure its volume! See if you can find one with a similar volume, a larger volume, and a smaller volume.";
        }
        else if (clicker == true)
        {
            clicker = false;
            message.gameObject.SetActive(false);
            dialogueBox.SetActive(false);
            nextButton.SetActive(false);
            reset();
        }
    }

}