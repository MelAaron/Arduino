const int Speaker = 2;
int beatTime = 200;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(Speaker,262,beatTime);//Do
  delay(beatTime);
  tone(Speaker,294,beatTime);//Re
  delay(beatTime);
  tone(Speaker,330,beatTime);//Mi
  delay(beatTime);
  tone(Speaker,349,beatTime);//Fa
  delay(beatTime);
  tone(Speaker,392,beatTime);//Sol
  delay(beatTime);
  tone(Speaker,440,beatTime);//La
  delay(beatTime);
  tone(Speaker,494,beatTime);//Si
  delay(beatTime);
  tone(Speaker,523,beatTime);//Do
  delay(beatTime);
}
