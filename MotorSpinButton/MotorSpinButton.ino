const int motorPin = 2;
const int button1Pin = 7;
const int motor2Pin = 3;
int speedM = 255;
void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT);
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(motor2Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(button1Pin) == LOW)
  {
    analogWrite(motorPin, speedM);
    analogWrite(motor2Pin, speedM);
  }
  else
  {
    analogWrite(motorPin, 0);
    analogWrite(motor2Pin, 0);
  }
}
