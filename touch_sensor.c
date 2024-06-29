/*
    Project name : Arduino Uno Touch Sensor 
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-capacitive-touch-module
*/

// Define the pin connected to the touch sensor module
const int touchSensorPin = 2;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set the touch sensor pin as input
  pinMode(touchSensorPin, INPUT);
}

void loop() {
  // Read the state of the touch sensor
  int touchState = digitalRead(touchSensorPin);

  // Print the touch sensor state to the Serial Monitor
  if (touchState == HIGH) {
    Serial.println("Touch detected");
  } else {
    Serial.println("No touch detected");
  }

  // Add a small delay to avoid flooding the Serial Monitor
  delay(200);
}
