int ledPin = 13;
int buttonPin = 9;
bool On = false;
//Raudonas - Gnd
//Zalias - pin
//Juodas - niekur?
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == LOW)
  On = !On;
  if(On)
  digitalWrite(ledPin, HIGH);
  else
  digitalWrite(ledPin, LOW);
  
}
