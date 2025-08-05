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
  LS=digitalRead(Lsensor);
  MS=digitalRead(Msensor);
  RS=digitalRead(Rsensor);
  Serial.print(LS);
  Serial.print("\t");
  Serial.print(MS);
  Serial.print("\t");
  Serial.println(RS);
  if (LS==1 && MS==1 && RS==1)
  {
//    analogWrite(ena1,120);
//    digitalWrite(in1,1);
//    digitalWrite(in2,0);
//    analogWrite(ena2,120);
//    digitalWrite(in3,1);
//    digitalWrite(in4,0);
analogWrite(ena1,150);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    analogWrite(ena2,150);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    //Straight
  }
  else if (LS==0 && MS==1 && RS==0)
  {
    analogWrite(ena1,120);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    analogWrite(ena2,120);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    //Straight
  }
  else if (LS==1 && MS==0 && RS==1)
  {
    analogWrite(ena1,120);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    analogWrite(ena2,120);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    //Straight
  }
  else if (LS==1 && MS==0 && RS==0)
  {
    analogWrite(ena1,120);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,120);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    //Left
  }
  else if (LS==1 && MS==1 && RS==0)
  {
    analogWrite(ena1,120);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,120);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    //Left
  }
  else if (LS==0 && MS==0 && RS==1)
  {
    analogWrite(ena1,120);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    analogWrite(ena2,120);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    //Right
  }
  else if (LS==0 && MS==1 && RS==1)
  {
    analogWrite(ena1,120);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    analogWrite(ena2,120);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    //Right
  }
    else
   {
    analogWrite(ena1,120);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    analogWrite(ena2,120);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    //Straight
    }
}    
