const int ledPin = 13; //pin 13 built-in led
const int soundPin = A0; //voice sensor attach to A0

void setup()
{
  pinMode(ledPin,OUTPUT); ////set pin13 as OUTPUT
  Serial.begin(9600); //initialize serial monitor
}

void loop()
{
  int value = analogRead(soundPin); //read the value of voice sensor
  Serial.println(value); //print the value
  if(value > 25) //if the value is greater than 25
  {
    digitalWrite(ledPin,HIGH); //turn on the led
    delay(2000); //delay 2s
  }
  else
  {
    digitalWrite(ledPin,LOW); //turn off the led
  }
}
