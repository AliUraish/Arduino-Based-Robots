int ena1=5;
int ena2=6;
int in1=7;
int in2=8;
int in3=9;
int in4=10;
int trig=3;
int echo=11;
int Usonicinch;
long duration;

int count = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(115200);
pinMode(ena1,OUTPUT);
pinMode(ena2,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(1);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
delayMicroseconds(1);

duration=pulseIn(echo,HIGH);

Usonicinch=duration*0.0133/2;
Serial.print("Usonic inch :");
Serial.println(Usonicinch);


if(Usonicinch < 5)
    {
      analogWrite(ena1,190);
      analogWrite(ena2,190);
      digitalWrite(in1,0);
      digitalWrite(in2,1);
      digitalWrite(in3,0);
      digitalWrite(in4,1);
       }
  else
    {
      analogWrite(ena1,190);
      analogWrite(ena2,190);
      digitalWrite(in1,1);
      digitalWrite(in2,0);
      digitalWrite(in3,1);
      digitalWrite(in4,0);
      }
}
