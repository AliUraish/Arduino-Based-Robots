int Lsensor=11;
int Msensor=12;
int Rsensor=13;
int ena1=5;
int ena2=6;
int in1=7;
int in2=8;
int in3=9;
int in4=10;
void setup() {
  // put your setup code here, to run once:
pinMode(Lsensor,INPUT);
pinMode(Msensor,INPUT);
pinMode(Rsensor,INPUT);
pinMode(ena1,OUTPUT);
pinMode(ena2,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Lsensor=digitalRead(Lsensor);
Serial.begin(Lsensor);
Serial.begin("\t");
Msensor=digitalRead(Msensor);
Serial.begin(Msensor);
Serial.begin("\t");
Rsensor=digitalRead(Rsensor);
Serial.begin(Rsensor);
Serial.begin("\t");

if(Lsensor==0 && Msensor==0 && Rsensor==0)
{
  analogWrite(ena1,0);
 analogWrite(ena2,0);
}


}
