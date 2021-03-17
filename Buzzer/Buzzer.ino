const int buzzer = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(500);
}
