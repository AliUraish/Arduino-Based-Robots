int ena1=5;
int ena2=6;
int in1=7;
int in2=8;
int in3=9;
int in4=10;
int Lsensor=13;
int Msensor1=12;
int Msensor2=11;
int Rsensor=4;
int LS,MS1,MS2,RS;

void setup() {
  // put your setup code here, to run once:
pinMode(ena1,OUTPUT);
pinMode(ena2,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(Lsensor,INPUT);
pinMode(Msensor1,INPUT);
pinMode(Msensor2,INPUT);
pinMode(Rsensor,INPUT);

Serial.begin(9600);

}

void loop() {
  LS=digitalRead(Lsensor);
  MS1=digitalRead(Msensor1);
  MS2=digitalRead(Msensor2);
  RS=digitalRead(Rsensor);
  Serial.print(LS);
  Serial.print("\t");
  Serial.print(MS1);
  Serial.print("\t");
  Serial.print(MS2);
  Serial.print("\t");
  Serial.println(RS);
  
    analogWrite(ena1,190);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,190);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
  if (LS==0 && MS1==0 && MS2==0 && RS==0 )
  {
    analogWrite(ena1,75);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,75);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    
    //Stop
    }
   else if(LS==0 && MS1==0 && MS2==0 && RS==1)
   {
    analogWrite(ena1,180);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    analogWrite(ena2,180);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    //Sharp Right
    }
    else if(LS==0 && MS1==0 && MS2==1 && RS==1)
   {
    analogWrite(ena1,140);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    analogWrite(ena2,140);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    //Right Soft
    }
    else if(LS==0 && MS1==1 && MS2==1 && RS==0)
   {
    analogWrite(ena1,190);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,190);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    //Straight
    }
//
     else if(LS==0 && MS1==0 && MS2==1 && RS==0)
   {
    analogWrite(ena1,190);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,190);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    //Straight
    }
//
     else if(LS==0 && MS1==1 && MS2==0 && RS==0)
   {
    analogWrite(ena1,190);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,190);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    //Straight
    }
//    
    else if(LS==0 && MS1==1 && MS2==1 && RS==1)
   {
    analogWrite(ena1,130);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    analogWrite(ena2,130);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    // 90 Right
    }
    else if(LS==1 && MS1==0 && MS2==0 && RS==0)
   {
    analogWrite(ena1,180);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,180);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    //Sharp Left
    }
    else if(LS==1 && MS1==1 && MS2==0 && RS==0)
   {
    analogWrite(ena1,130);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,130);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    //Soft Left
    }
    else if(LS==1 && MS1==1 && MS2==1 && RS==0)
   {
    analogWrite(ena1,130);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,130);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    //90 Left
    }
    else if(LS==1 && MS1==1 && MS2==1 && RS==1)
   {
    analogWrite(ena1,190);
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    analogWrite(ena2,190);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    //Stright
    }
}    
