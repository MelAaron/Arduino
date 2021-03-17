const int rightS = 7;
const int leftS = 8;
int current = 0;
int last = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rightS, INPUT);
  pinMode(leftS, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(rightS) == HIGH && last != rightS)
  {
    current = rightS;
    Serial.println("RIGHT");
  }
  else if (digitalRead(leftS) == HIGH && last != leftS)
  {
    current = leftS;
    Serial.println("LEFT");
  }
  last = current;
}
