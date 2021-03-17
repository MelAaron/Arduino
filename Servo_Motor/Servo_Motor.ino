#include <Servo.h>
//Servo library
Servo servo_test;
int angle = 0;
void setup() {
  // put your setup code here, to run once:
  servo_test.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Forward");
  for(angle = 3; angle < 178; angle++)
  {
    servo_test.write(angle);
    delay(15);
    Serial.println(angle);
  }

  delay(1000);
  Serial.println("Backward");
  for(angle = 178; angle > 3; angle--)
  {
    servo_test.write(angle);
    delay(15);
    Serial.println(angle);
  }

  delay(1000);
}
