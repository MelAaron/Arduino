int Xin= A0; // X Input Pin
int Yin = A1; // Y Input Pin
int KEYin = 3; // Push Button

const int Motor = 2;

//1023 - 100%
//aVal - aP%
//----------
//aP = (aVal * 100) / 1023

//255 - 100%
//speed - sP%
//----------
//sP = (speed * 100) / 255

void setup ()
{
  pinMode (KEYin, INPUT);
  pinMode(Motor, OUTPUT);
  Serial.begin (9600); 
}
void loop ()
{
  double xVal, yVal, buttonVal;
  
  xVal = analogRead (Xin);
  yVal = analogRead (Yin);
  buttonVal = digitalRead (KEYin);

  double XP = (xVal * 100) / 1023;
  //int YP = (yVal * 100) / 1023;
  //Serial.print("XP = ");
  //Serial.println (XP, DEC);
  int speedX = (XP / 100) * 255;
  //int speedY = (YP / 100) * 255;
  //Serial.print("speedX = ");
  //Serial.println (speedX, DEC);

  analogWrite(Motor, speedX);
  
  Serial.print("X = ");
  Serial.println (xVal, DEC);
  
  Serial.print ("Y = ");
  Serial.println (yVal, DEC);
  
  Serial.print("Button is ");
  if (buttonVal == HIGH){
    Serial.println ("not pressed");
  }
  else{
    Serial.println ("PRESSED");
  }
    
  //delay (500);
}
