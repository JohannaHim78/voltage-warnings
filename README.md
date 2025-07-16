**VOLTAGE WARNINGS**

Prints changing voltage onto serial monitor and uses LEDs to warn user when voltage is increasing. 
Green indictates voltage is between **0 - 2V**, yellow indicates voltage is between **2 - 4V**, red indicates 
voltage is between **4 - 5V**. 


**Motivation** 
In my last study, I learned how to utilize potentiometers and create a program that showcases changing voltage in real time. 
This time, I wanted to build upon that. Not only did I want a program that showcases changing voltage, but also a program that 
warns the user when voltage is rising using LEDs. 


**Components Used** 

 - Arduino Uno R3
 - Jumper wires
 - Breadboard
 - 10k ohm potentiometer
 - 330 ohm resistors
 - LEDs


**Breakdown of Circuit** 

Reading voltage: To read the voltage, I first wired a potentiometer to the Arduino and wrote code 
(very similar to my Intro to Potentiometers code) to display changing voltage in real time. 

LEDs: For each of the LEDs, I wired a wire from an arduino pin to the breadboard. Then, in series, I connected a resistor to the circuit connected to the mentioned wire. 
From the resistor, I connected an LED in series. Finally, in series, I completed the circuit by wiring a wire from the LED to the ground row. 
Use this method to connect green, yellow, and red LEDs to the breadboard. 

Image of Circuit: 

![circuit](https://github.com/user-attachments/assets/6ea7bf0e-9825-4916-a0ee-7679f7f7463b)


**Breakdown of Code** 

To start, I created variables **vPin**, **vOut**, and **vReal**. vPin is the analog pin read and vOut stores voltage value from vPin. Since vOut would 
showcase voltage from numbers 0 - 1023 instead of 0 - 5V, vReal is the variable that will hold voltage from 0 - 5V. 

For the LEDs, I simply set pins 6, 5, and 3 as output pins for the green, yellow, and red LEDs respectively. 

I then created variable dt which would hold the amount of time I wanted between each loop of the code. For aesthetics, I created a string " V" 
which is displayed on the serial monitor after vReal is displayed. 


In the setup, I set the baud rate to 9600. I then set my green, yellow, and red pins to output. 

To display the voltage, I executed the same code seen in my Intro to Potentiometers repo. Below shows an example of the serial monitor displaying 
changing voltage in real time. 

<img width="105" height="166" alt="serial_monitor" src="https://github.com/user-attachments/assets/368e6e17-ca8c-4182-a5e7-7b9f3ad3d14a" />

As for the warnings, I created an if statement for each LED color. If vReal is less than 2, then the green LED would turn on. 
If vReal is between 2 and 4, then the yellow LED would turn on. If vReal is between 4 and 5, the red LED would turn on. 

I set a delay of 1 second for each if loop. This creates a space between each time the warnings change from color to color. 


**What I Learned** 

In this project, I learned how to utilize potentiometers for real-life scenarios, such as warnings for rising voltage. This built on 
my previous knowledge of potentiometers where I only knew how to create a circuit solely with a potentiometer. 
