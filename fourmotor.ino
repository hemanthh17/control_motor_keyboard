int motorPin1 = 5;
int motorPin2=6;
int motorPin3=3;
int motorPin4=8;
 
void setup() 
{ 
  pinMode(motorPin1, OUTPUT);
pinMode(motorPin2, OUTPUT);
pinMode(motorPin3, OUTPUT);
pinMode(motorPin4, OUTPUT);
  Serial.begin(9600);
  } 
 void loop() 
{ 
  if (Serial.available()>0)
  {
    char dir = Serial.read();
    if(dir=='w'|| dir=='W')
    {
      digitalWrite(motorPin1,HIGH);
      digitalWrite(motorPin2,HIGH);
      digitalWrite(motorPin3,HIGH);
      digitalWrite(motorPin4,HIGH);
      }
    else if(dir=='a'|| dir=='A')
    {
      digitalWrite(motorPin1,LOW);
      digitalWrite(motorPin2,HIGH);
      digitalWrite(motorPin3,HIGH);
      digitalWrite(motorPin4,HIGH);
      }
    else if(dir=='d'|| dir=='D')
    {
      digitalWrite(motorPin1,HIGH);
      digitalWrite(motorPin2,LOW);
      digitalWrite(motorPin3,HIGH);
      digitalWrite(motorPin4,HIGH);
      }
  }
else
{
Serial.write(“Invalid Input”);
  }
}
 
