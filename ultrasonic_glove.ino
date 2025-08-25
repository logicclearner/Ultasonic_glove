#include <A2DPVolumeControl.h>
#include <BluetoothA2DP.h>
#include <BluetoothA2DPCommon.h>
#include <BluetoothA2DPOutput.h>
#include <BluetoothA2DPSink.h>
#include <BluetoothA2DPSinkQueued.h>
#include <BluetoothA2DPSource.h>
#include <config.h>

#include <A2DPVolumeControl.h>
#include <BluetoothA2DP.h>
#include <BluetoothA2DPCommon.h>
#include <BluetoothA2DPOutput.h>
#include <BluetoothA2DPSink.h>
#include <BluetoothA2DPSinkQueued.h>
#include <BluetoothA2DPSource.h>
#include <config.h>


// Define pins for ultrasonic and buzzer
int const trigPin = 8 ;
int const echoPin = 7;
int const buzzPin = 4;

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT); // trig pin will have pulses output
	pinMode(echoPin, INPUT); // echo pin should be input to get pulse width
	pinMode(buzzPin, OUTPUT); // buzz pin is output to control buzzering
}

void loop()
{
	int duration, distance;
	digitalWrite(trigPin, HIGH); 
	delay(1);
	digitalWrite(trigPin, LOW);
	duration = pulseIn(echoPin, HIGH);
	distance = (duration/2) / 29.1;
    if (distance <= 100 && distance > 50) {
        digitalWrite(buzzPin, LOW);
        delay(200);
        digitalWrite(buzzPin, HIGH);
        delay(200);
    } else if (distance <= 50 && distance > 25) {
        digitalWrite(buzzPin, LOW);
        delay(100);
        digitalWrite(buzzPin, HIGH);
        delay(100);
    } else if(distance<=25 && distance >10){
        digitalWrite(buzzPin, LOW);
        delay(50);
        digitalWrite(buzzPin, HIGH);
        delay(50);
    }else if(distance<=10 && distance >=0){
        digitalWrite(buzzPin, LOW);
        delay(25);
        digitalWrite(buzzPin, HIGH);
        delay(25);
    } else {
      digitalWrite(buzzPin,LOW);
    }
    delay(60);
}
