[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/LanaDelSlay/Arduino-Face-Tracking/corgi.png">
    <img src="Corgi.png" alt="Logo" width="256" height="256">
  </a>

  <h3 align="center">Arduino Face Tracking.</h3>
  
  <p align="center">
  Redone by me!
    <br />
    <br />
    <br />
    <a href="#inside">View Example</a>
    ·
    <a href="https://github.com/LanaDelSlay/Arduino-Face-Tracking/issues">Report Bugs</a>
  
</p>



<!-- TABLE OF CONTENTS -->
<details align="left" open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
      </ul>
    </li>
    <li><a href="#getting-started">Getting Started</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgements">Acknowledgements</a></li>
    <li><a href="#my-very-janky-concoction">My Very Janky Concoction</a></li>
    <li><a href="#required-hardware-links">Required Hardware Links</a></li>
  </ol>
</details>


<!-- ABOUT THE PROJECT -->
## About The Project
This is a modified version of popular circulating face tracking code that I found to not work on python2 or 3, and edited it to actually work for python3 lol! 


<!-- GETTING STARTED -->
## Getting Started

### Software & Hardware Requirements.
  <summary>Software Required</summary>
  <ol>
    <ul>Arduino IDE</ul>
    <ul>Pyhton</ul>
    <ul>PySerial</ul>
    <ul>Numpy</ul>
    <ul>OpenCV</ul>
  </ol> 
  
  <summary>Requirements For The Hardware</summary>
  <ol>
    <ul>2x Servos </ul>
    <ul>Pan & Tilt Kit</ul>
    <ul>Arduino</ul>
    <ul>Breadboard & Wires</ul>
    <ul>USB Camera</ul>
  </ol>

### Installing the software.
1. Install Python [here](https://www.python.org/downloads/) (During installation you'll be asked if you want the IDLE editor, I'd reccomend getting it for ease of running the python script later!). 
2. Install PySerial, we can do this by openeing command prompt and typing 
```
pip install serial
```
3. Install Numpy 
```
pip install numpy
```
4. Install openCV
```
pip install opencv-python
```
5. Install the Arduino IDE [here!](https://www.arduino.cc/en/software)
6. We're all done with software, now to the hardware! Lets move on to the next section to see how to wire the servos to the Arduino!

### How to wire the servos to Arduino.
#### Schematic (See below if you're confused)
![Schematic](https://i.imgur.com/uEmxZit.png)
#### Diagram
![Diagram](https://i.imgur.com/aPABEaG.png)
(Some servos do need 5v however, such as the continous servo linked here! )
### Upload the code the the Arduino 
1. Open Servo.ini using the Arduino IDE
2. Under Tools-> Select the right Arduino board, and "COM Port", the USB port.

![Tools Example](https://i.imgur.com/G6XWyXs.png)

3. Click the upload button

![Upload Button Example](https://i.imgur.com/mdeXwJU.png)

4. Finished! Now we just have to run the Pyhton code.

### Running the Python Code
1. Open the IDLE editor, should've been installed while installing Python!
2. Click Run -> Run Module ( Or click F5) 

![Run Module](https://i.imgur.com/TUBvljj.png)

3. You're done! You should now have a working face tracking camera and a pyhton window looking like this!

![Face Tracking](https://i.imgur.com/4RCBjMi.png) 

## My Very Janky Concoction
### Inside
![Inside](https://i.imgur.com/gI1wGmO.jpg)
### Outside
![Outside](https://i.imgur.com/JteLVQU.jpg)
### Behind
![Behind](https://i.imgur.com/T6jsvfF.jpg)
### Bottom
![Bottom](https://i.imgur.com/95J8m6l.jpg)
### Janky Camera Setup LOL
![Janky Setup](https://i.imgur.com/tyoQNcZ.jpg)

<!-- CONTACT -->
## Contact
Graham - gmiller1902@gmail.com
Project Link: [https://github.com/LanaDelSlay/Arduino-Face-Tracking/](https://github.com/LanaDelSlay/Arduino-Face-Tracking/)

<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements
* [Original Article](https://create.arduino.cc/projecthub/WolfxPac/face-tracking-using-arduino-b35b6b)
* [This ReadME template](https://github.com/othneildrew/Best-README-Template)

## Required Hardware Links
* [Cheap Arduino Board ($13)](https://amzn.to/2RCAFkA)
* [Small USB Camera ($45)](https://amzn.to/3vcWs0T)
* [Pan & Tilt Servo Case($20)](https://amzn.to/3oE6ANC)
* [Bread Board & Wires($10)](https://amzn.to/3bHHmbS)
* [Servo($8)](https://amzn.to/347tseU) (Currently the code is intended for one of these as the veritcal servo, and a continous turn servo for the horizontal.)
* [Continous Servo For Horizontal Axis($17)](https://amzn.to/2SbggD7) 

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/LanaDelSlay/Arduino-Face-Tracking.svg?style=for-the-badge
[contributors-url]: https://github.com/LanaDelSlay/Arduino-Face-Tracking/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/LanaDelSlay/Arduino-Face-Tracking.svg?style=for-the-badge
[forks-url]: https://github.com/LanaDelSlay/Arduino-Face-Tracking/network/members
[stars-shield]: https://img.shields.io/github/stars/LanaDelSlay/Arduino-Face-Tracking.svg?style=for-the-badge
[stars-url]: https://github.com/LanaDelSlay/Arduino-Face-Tracking/stargazers
[issues-shield]: https://img.shields.io/github/issues/LanaDelSlay/Arduino-Face-Tracking.svg?style=for-the-badge
[issues-url]: https://github.com/LanaDelSlayArduino-Face-Tracking/issues
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/graham-miller-b655611aa/
[product-screenshot]: images/screenshot.png
