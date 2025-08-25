# Ultasonic_glove

An Arduino-based smart glove that uses an ultrasonic sensor and a buzzer to help users detect and navigate around obstacles.

This project turns a simple glove into an assistive device. It uses an HC-SR04 ultrasonic sensor to measure the distance to objects in front of the user and provides real-time auditory feedback through a buzzer. The frequency of the buzzer's beeps increases as an object gets closer, alerting the user to potential obstacles.

Features
Proximity Detection: Senses objects and obstacles in the user's path.

Variable Auditory Feedback: The buzzer's beep rate changes dynamically based on the object's distance, providing intuitive feedback.

Low Power & Simple: Built with common, low-cost components and straightforward code.

Customizable Range: The detection ranges and corresponding beep frequencies can be easily modified in the code.

No External Libraries: The sketch uses only standard, built-in Arduino functions.

Hardware Requirements
Arduino (e.g., Arduino Nano, Pro Mini, or UNO)

HC-SR04 Ultrasonic Sensor

5V Buzzer

Glove

Power Source (e.g., 9V battery or a small power bank)

Jumper Wires

Getting Started
Follow these instructions to assemble and run the project.

1. Wiring
Connect the components to the Arduino digital pins as defined in the ultrasonic_glove.ino sketch.

Ultrasonic Sensor:

VCC -> Arduino 5V

GND -> Arduino GND

Trig Pin -> Arduino Pin 8

Echo Pin -> Arduino Pin 7

Buzzer:

Positive Pin (+) -> Arduino Pin 4

Negative Pin (-) -> Arduino GND

2. Installation
Mount the Arduino, sensor, and buzzer onto the glove.

Connect the Arduino to your computer via USB.

Open the Arduino IDE.

Copy and paste the ultrasonic_glove.ino sketch into the IDE.

Select the correct Board and Port from the Tools menu.

Click the Upload button.

Power the Arduino with your chosen power source.

How It Works
The system operates in a continuous loop to provide constant feedback to the user.

Distance Measurement: The Arduino sends a short pulse from the ultrasonic sensor's trigPin. The sensor then listens for the reflected sound wave on its echoPin.

Calculation: The code measures the time it takes for the echo to return (duration) and calculates the distance in centimeters using the formula: distance = (duration / 2) / 29.1.

Auditory Feedback Logic: Based on the calculated distance, the code triggers the buzzer at different rates:

> 100 cm: The buzzer is silent.

51-100 cm: The buzzer beeps slowly (200ms interval).

26-50 cm: The buzzer beeps at a medium pace (100ms interval).

11-25 cm: The buzzer beeps quickly (50ms interval).

0-10 cm: The buzzer beeps very rapidly (25ms interval), indicating an immediate obstacle.

The loop repeats after a short delay, constantly updating the user on their surroundings.

License
This project is open source. Feel free to use, modify, and distribute it.
