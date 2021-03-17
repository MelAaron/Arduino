const int ledPin = 7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
 // int countdown = 5;
 // Countdown(5);

}

void loop() {
  // put your main code here, to run repeatedly:

  static int delayPeriod = 100;
  static int countDir = 1;
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);

  countDir = checkDirChange(delayPeriod, countDir);
  delayPeriod += 100 * countDir;
  Serial.print("New wait time: ");
  Serial.println(delayPeriod);
}

int checkDirChange (int delayPeriod, int countDir)
{
  if ((delayPeriod == 1000)||(delayPeriod == 0))
  {
  countDir *= -1;

  if(countDir < 0)
  Serial.println("Going Down");
  else
  Serial.println("Going Up");
  }

  return countDir;
}

//void Countdown(int given)
//{
//  for(int i = given; i > 0; i--)
//  {
//  Serial.println(i);
//  delay(1000);
//  }
//}
