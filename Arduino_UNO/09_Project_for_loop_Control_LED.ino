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
    analogWrite(11, i);
    delay(15);
  }
  for(int j = 255; j >= 0; j--)
  {
    analogWrite(11, j);
    delay(15);
  }
}
