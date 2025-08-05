#define BLYNK_PRINT Serial
#include<BlynkSimpleEsp8266.h>
#include<ESP8266WiFi.h>

#define led D4
#define led1 D5
WidgetLED LED1(V2);
WidgetLED LED2(V3); 
char auth []=
" iL-HZJKwuygyAEh9ePPOQ_JA_BdMC_Y0";
char ssid []="TP-Link_AF58";
char pass[]="dlrripd789122";
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(led1,OUTPUT); 

Serial.begin(9600);
Blynk.begin(auth,ssid,pass);
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
}



BLYNK_WRITE(V0)
{
  int y=param.asInt();
  Serial.println(y);
if(y==1)
{
  digitalWrite(led,HIGH);
  LED1.on();
}
else{
  digitalWrite(led,LOW);
  LED1.off();
}}
BLYNK_WRITE(V1)
{
  int y=param.asInt();
  Serial.println(y);

if(y==1)
{
  digitalWrite(led1,HIGH);
  LED2.on();
}
else{
  digitalWrite(led1,LOW);
  LED2.off();
}
}
