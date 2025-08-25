# Ultasonic_glove


An Arduino-based smart glove that uses an ultrasonic sensor and a buzzer to help users detect and navigate around obstacles.

This project turns a simple glove into an assistive device. It uses an HC-SR04 ultrasonic sensor to measure the distance to objects in front of the user and provides real-time auditory feedback through a buzzer. The frequency of the buzzer's beeps increases as an object gets closer, alerting the user to potential obstacles.

Features:
This project's key features include proximity detection to sense objects and obstacles, and variable auditory feedback where the buzzer's beep rate changes dynamically based on distance. It is a low-power and simple device, built with common components and straightforward code. The detection ranges are easily customizable within the code, and the sketch requires no external libraries as it relies only on standard, built-in Arduino functions.

Hardware Requirements:
To build this project, you will need an Arduino board such as a Nano, Pro Mini, or UNO. You will also need an HC-SR04 ultrasonic sensor, a 5V buzzer, and a glove to mount the components on. To power the device, you will need a source like a 9V battery or a small power bank, along with the necessary jumper wires to connect everything.

Getting Started:
Follow these instructions to assemble and run the project.

1. Wiring:
The wiring for this project is straightforward. For the ultrasonic sensor, you will connect its VCC pin to the Arduino's 5V pin, GND to GND, the Trig pin to Arduino Pin 8, and the Echo pin to Arduino Pin 7. For the buzzer, connect its positive pin, often marked with a +, to Arduino Pin 4 and its negative pin to GND.

2. Installation:
The installation process begins with securely mounting the Arduino, sensor, and buzzer onto the glove. Once the hardware is in place, connect the Arduino to your computer using a USB cable and open the Arduino IDE. You will then copy the entire ultrasonic_glove.ino sketch and paste it into the IDE. From the Tools menu, ensure you have selected the correct Board and Port for your Arduino. Finally, click the Upload button to transfer the code to the board and then power the Arduino with your chosen power source to complete the setup.

How It Works:
The system operates in a continuous loop to provide constant feedback to the user. It begins with distance measurement, where the Arduino sends a short pulse from the sensor's trigPin and listens for the echo on the echoPin. The code then calculates the distance in centimeters by measuring the echo's return time. Based on this distance, it provides auditory feedback. The buzzer is silent for objects farther than 100 cm. It beeps slowly for objects between 51 and 100 cm, at a medium pace for 26 to 50 cm, quickly for 11 to 25 cm, and very rapidly for objects within 10 cm. This loop repeats after a short delay, constantly updating the user on their surroundings.

License:
This project is open source. Feel free to use, modify, and distribute it.
