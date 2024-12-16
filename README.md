[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/zwbwvhFk)
# IoT 2024 - Lab 8

* Team N:
* Student N1 (id, surname, name):
* Student N2 (id, surname, name):
* Student N3 (id, surname, name):
* Student N4 (id, surname, name):

![image](https://github.com/user-attachments/assets/289ba734-3c1b-4724-85f6-130862a8d71d)


* According to the picture above, you have to assemble the hardware.


## Task-1:

* You have to create an account in `blynk.io` service, as we are going to use it in this lab
* After creating and logging in to your account in blynk, create a "template":
* In the template, you have to add multiple widgets:
*   1) 4 `switch` widgets for each LEDs on the board. (for each widget, you assign a virtual pin - datastream)
    2) one `indicator` widget (to indicate whether we pressed the button in the board or not)
    3) one `slider`, with values from `-90` till `+90`, so that we can control on-board servo motor

* After setting up and saving the template, go to the device section in blynk.io, and create new device based on the recently created template
* Copy the credentials from the device info (template ID, blynk authentication token, etc...)

* Now, you can get examples code from [Blynk Examples](https://examples.blynk.cc/)

* In the Arduino IDE, go to the `Tools` -> `Manage Libraries` section and type "Blynk" there, after certain time, it appears in the list, install it
* Create new sketch, and use the above example code, replace the credentials, and add the code that handles LEDs, buttons, and servo motor.
* Test your code, via Blynk service.

* Update `task1.ino` file with your code and make a commit


## Task-2:

* Now, find `Blynk Edgent` example in Arduino IDE examples section, and open it
* Change some parammeters for the ESP32
* Test this example with OTA functionality

* Update `task2.ino` file with your code and make a commit
