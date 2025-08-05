int ena1=5;
int ena2=6;
int in1=7;
int in2=8;
int in3=9;
int in4=10;
int Lsensor=11;
int Msensor=12;
int Rsensor=13;
int LS,MS,RS;

void setup() {
  // put your setup code here, to run once:
pinMode(ena1,OUTPUT);
pinMode(ena2,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(Lsensor,INPUT);
pinMode(Msensor,INPUT);
pinMode(Rsensor,INPUT);

Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
LS=digitalRead(Lsensor);
MS=digitalRead(Msensor);
RS=digitalRead(Rsensor);
Serial.print(LS);
Serial.print("\t");
Serial.print(MS);
Serial.print("\t");
Serial.print(RS);
Serial.print("\t");

}
