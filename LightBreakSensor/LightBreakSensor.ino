int Led = 13 ;// Declaration of the LED-output pin
int Sensor = 8; // Declaration of the Sensor-input pin
int val; // Temporary variable
void setup ()
{
  pinMode (Led, OUTPUT) ; // Initialization output pin
  pinMode (Sensor, INPUT) ; // Initialization sensorpin
}
void loop ()
{
  val = digitalRead (Sensor) ; // The current signal at the sensor will be read.
  if (val == HIGH) //The led will flash up, if a signal was detected.
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
