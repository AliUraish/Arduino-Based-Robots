
#define BLYNK_PRINT Serial


#include <SoftwareSerial.h>
SoftwareSerial SwSerial(10, 11); // RX, TX
    
#include <BlynkSimpleSerialBLE.h>
#include <SoftwareSerial.h>
#define trigPin 3
#define echoPin 9
WidgetLED led1(V0);
#include <Servo.h>   //servo library
Servo servo;     
int trigpin1 = 5;    
int echopin11 = 6;   
int servoPin = 7;
int led= 10;
long duration1, dist1, average;   
long aver[3];   //array for average

float duration,distance;
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "QjhWe0HIAQct9B7b_GEfA-81-nW6y054";

SoftwareSerial SerialBLE(10, 11); 






void setup()
{
  // Debug console
  Serial.begin(9600);

  SerialBLE.begin(9600);
  Blynk.begin(SerialBLE, auth);
  pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
servo.attach(servoPin);  
    pinMode(trigpin1, OUTPUT);  
    pinMode(echopin11, INPUT);  
    servo.write(0);         //close cap on power on
    delay(100);
    servo.detach(); 


  Serial.println("Waiting for connections...");

 
}
void measure() {  
 digitalWrite(10,HIGH);
digitalWrite(trigpin1, LOW);
delayMicroseconds(5);
digitalWrite(trigpin1, HIGH);
delayMicroseconds(15);
digitalWrite(trigpin1, LOW);
pinMode(echopin11, INPUT);
duration1 = pulseIn(echopin11, HIGH);
dist1 = (duration1/2) / 29.1;    //obtain dist1ance
Serial.println(dist1);
}

void loop()
{
   Blynk.run();

  digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);



for (int i=0;i<=2;i++) {   //average dist1ance
    measure();               
   aver[i]=dist1;            
    delay(10);              //delay between measurements
  }
 dist1=(aver[0]+aver[1]+aver[2])/3;    

if ( dist1<70 ) {
//Change dist1ance as per your need
 servo.attach(servoPin);
  delay(1);
 servo.write(180);  
 delay(5000);       
 servo.write(0);    
 delay(1000);
 servo.detach();      
}
  if(distance<=10)
{Blynk.notify("please clean");
delay(15);}



 
  
}
