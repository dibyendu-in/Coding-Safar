/*
 * Author: DIBYENDU BARMAN
 * Date: 14-June-2023
 * Project Description: Connect the 7-segment display to the Arduino Uno and display numbers or characters.
 */

void setup() {
  // Define segment pins as outputs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // Display the number 3
  digitalWrite(2, LOW);  // segment a
  digitalWrite(3, LOW);  // segment b
  digitalWrite(4, LOW);  // segment c
  digitalWrite(5, LOW);  // segment d
  digitalWrite(6, HIGH); // segment e
  digitalWrite(7, HIGH); // segment f
  digitalWrite(8, LOW);  // segment g

  // Add a delay to keep the number displayed
  delay(1000);

  // Turn off all segments
  digitalWrite(2, LOW);   // segment a
  digitalWrite(3, LOW);   // segment b
  digitalWrite(4, LOW);   // segment c
  digitalWrite(5, LOW);   // segment d
  digitalWrite(6, LOW);   // segment e
  digitalWrite(7, LOW);   // segment f
  digitalWrite(8, LOW);   // segment g

  // Add a delay before displaying the next number
  delay(1000);
}
