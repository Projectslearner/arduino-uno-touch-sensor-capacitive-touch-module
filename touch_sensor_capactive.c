/*
    Project name : Touch Sensor Capacitive Touch Module
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-touch-sensor-capacitive-touch-module
*/

const int touchPin = 2; // Pin connected to the touch sensor
const int ledPin = 13; // Pin connected to the LED

void setup() 
{
  pinMode(touchPin, INPUT); // Set touchPin as input
  pinMode(ledPin, OUTPUT); // Set ledPin as output
}

void loop() 
{
  int touchState = digitalRead(touchPin); // Read the touch sensor state
  
  if (touchState == HIGH) {
    digitalWrite(ledPin, !digitalRead(ledPin)); // Toggle the LED state if touched
    delay(200); // Delay to debounce touch input
  }
}
