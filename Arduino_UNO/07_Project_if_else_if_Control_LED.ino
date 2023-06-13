/*
 * Author: DIBYENDU BARMAN
 * Date: 13-June-2023
 * Project Description: LED Control with Pushbutton using Arduino, Variable Brightness Levels based on Button Presses
 */

int count = 0;

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(6, OUTPUT);
}

void loop() {
  int val = digitalRead(2);

  if(val == 0)
  {
    count = count + 1;
  }
  
  if(count == 1)
  {
    analogWrite(6, 100);
  }
  else if(count == 2)
  {
    analogWrite(6, 180);
  }
  else if(count == 3)
  {
    analogWrite(6, 255);
  }
  else
  {
    analogWrite(6, 0);
    count = 0;
  }
  delay(200);
}
