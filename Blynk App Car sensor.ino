#include <Blynk.h>
#define BLYNK_PRINT Serial
#include <BlynkSimpleSerialBLE.h>

char auth[] = "lSyHeuknFyVoJwISyisIUAaB-7UoH1-K";g
char ssid[] = "Apple";
char pass[] = "Pakistan";

int trigpin1=3;
int echopin1=2;

int trigpin2=9;
int echopin2=8;
float duration1,duration2;
float Usonicinch1,Usonicinch2;
WidgetLED led1(V2);
WidgetLED led2(V3);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
pinMode(trigpin1,OUTPUT);
pinMode(trigpin2,OUTPUT);
pinMode(echopin1,INPUT);
pinMode(echopin2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigpin1,LOW);
delayMicroseconds(1);
digitalWrite(trigpin1,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin1,LOW);
delayMicroseconds(1);

duration1=pulseIn(echopin1,HIGH);

Usonicinch1=duration1*0.0133/2;

digitalWrite(trigpin2,LOW);
delayMicroseconds(1);
digitalWrite(trigpin2,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin2,LOW);
delayMicroseconds(1);

duration2=pulseIn(echopin2,HIGH);

Usonicinch2=duration2*0.0133/2;
Serial.print("Usonic 1 :");
Serial.print(Usonicinch1);
Serial.print(" Usonic 2 :");
Serial.println(Usonicinch2);

if(Usonicinch1<=4 && Usonicinch2<=4)
{
  Serial.println("Space 1/2 occupied Occupied");
  led1.on();
  led2.on();
  }
else if(Usonicinch1>=4 && Usonicinch2>=4)
{
  Serial.println("Space 1/2 empty");
  led1.off();
  led2.off();
  }
else if(Usonicinch1<=4 && Usonicinch2>=4)
{
  Serial.println("Space 1 Occupied");
  led1.on();
  led2.off();
  }
else if(Usonicinch1>=4 && Usonicinch2<=4)
{
  Serial.println("Space 2 Occupied");
  led1.off();
  led2.on();
  }
}
