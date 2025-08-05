//#include <SoftwareSerial.h>
//
//SoftwareSerial mySerial(12,13);
char data;
int ena1=5;
int ena2=6;
int in1=7;
int in2=8;
int in3=9;
int in4=10;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
//mySerial.begin(9600);
pinMode(ena1,OUTPUT);
pinMode(ena2,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()>0)
{
  data = Serial.read();
  }

 Serial.print("data =");
  Serial.print("\n");
 Serial.println(data);

  if(data == 'F')
  {
    analogWrite(ena1,255);
    analogWrite(ena2,255);
     digitalWrite(in1,1);
   digitalWrite(in2,0);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    }
   if(data == 'B')
  {
    Serial.println("Pechae");
    analogWrite(ena1,255);
    analogWrite(ena2,255);
    digitalWrite(in1,0);
   digitalWrite(in2,1);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    }

  if(data == 'L')
  {
    Serial.println("Left Per");
    analogWrite(ena1,255);
    analogWrite(ena2,255);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    }
    if(data == 'R')
  {
    Serial.println("Right Per");
    analogWrite(ena1,255);
    analogWrite(ena2,255);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    }


    if(data == 'S')
  {
    analogWrite(ena1,0);
    analogWrite(ena2,0);
    digitalWrite(in1,0);
    digitalWrite(in2,0);
    digitalWrite(in3,0);
    digitalWrite(in4,0);
    Serial.println("Ruk jah ");
    }
    
    if(data == 'H')
  {
    analogWrite(ena1,255);
    analogWrite(ena2,255);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    Serial.println("Ruk jah ");
    }
























}
