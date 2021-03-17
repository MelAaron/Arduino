const int Motor = 2;
//Juodas GND
//Raudonas pin (2)
void setup() {
  // put your setup code here, to run once:
  pinMode(Motor, OUTPUT);
}

void loop() {
  /*
  static int speedC = 5;
  static int speedDir = 1;
  // put your main code here, to run repeatedly:
  if((speedC == 255) || (speedC == 0))
  {
    speedDir *= -1;
  }
  speedC += 5 * speedDir;
  
  analogWrite(Motor, speedC);
  delay(50);*/

  int speedM = 255;
  analogWrite(Motor, speedM);
  delay(1000);
  speedM = 0;
  analogWrite(Motor, speedM);
  delay(1000);
}
