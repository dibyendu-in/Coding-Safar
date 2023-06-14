/*
 * Author: DIBYENDU BARMAN
 * Date: 14-June-2023
 * Project Description: LED Fading Effect- Creating Smooth Brightness Transitions using for loop
 */

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= 255; i++)
  {
    analogWrite(10, i);
    delay(10);
  }
  for(int j = 255; j >= 0; j--)
  {
    analogWrite(10, j);
    delay(10);
  }
}
