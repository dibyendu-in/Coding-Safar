/*************************************
File name: Control LED Blink Rate With Potentiometer. 
*************************************/
int potPin = A0;
int ledPin = 13;
int val = 0;
void setup() {
   pinMode(ledPin, OUTPUT); // pinMode optional
   Serial.begin(9600);
}
void loop() {
  int val = analogRead(potPin);
  analogWrite(ledPin, val);
  Serial.println(val);
  delay(1000);
}
