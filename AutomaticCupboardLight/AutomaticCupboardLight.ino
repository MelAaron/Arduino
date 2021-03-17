int trigPin = 11;    // Trigger
int echoPin = 12;    // Echo
//int led = 8;
const int Red = 8;
const int Green = 9;
long duration, cm, last;
 
void setup() {
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //pinMode(led, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
}
 
void loop() {
  //digitalWrite(speaker, LOW);
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343

  if(cm != last){
  digitalWrite(Red, HIGH);
  digitalWrite(Green,LOW);
  delay(3000);
  }
  else {
    digitalWrite(Green, HIGH);
  digitalWrite(Red,LOW);
  }
  //if(cm < 10) digitalWrite(speaker, HIGH);
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  delay(250);
  last = cm;
}
