const int LED = 13;
const int BUTTON = 2;
int buttonState = 0;
//Raudonas - GND
//Zalias - pin (2)
//Juodas niekur?

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(BUTTON);
  if(buttonState == LOW)
  digitalWrite(LED, HIGH);
  else
  digitalWrite(LED, LOW);
}
