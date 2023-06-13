void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(12);
  Serial.println(val);
  digitalWrite(13, val);
}
