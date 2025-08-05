int ena1=5;
int ena2=6;
int in1=7;
int in2=8;
int in3=9;
int in4=10;
int SensorR=4;
int SensorMR=11;
int SensorML=12;
int SensorL=13;
int SR,SMR,SML,SL;

void setup() {
  // put your setup SMLoSLe here, to run onSMLe:
 
pinMode(ena1,OUTPUT);
pinMode(ena2,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(SensorR,INPUT);
pinMode(SensorMR,INPUT);
pinMode(SensorML,INPUT);
pinMode(SensorL,INPUT);


Serial.begin(9600);

}

void loop() {
 

  SR=digitalRead(SensorR);
  SMR=digitalRead(SensorMR);
  SML=digitalRead(SensorML);
  SL=digitalRead(SensorL);
  Serial.print(SR);
  Serial.print("\t");
  Serial.print(SMR);
  Serial.print("\t");
  Serial.print(SML);
  Serial.print("\t");
  Serial.print(SL);
  Serial.print("\n");

  
  
if(SensorR==0 && SensorMR==1 && SensorML==1 && SensorL==0)
   {
     analogWrite(ena1,70);
     digitalWrite(in1,0);
     digitalWrite(in2,1);
     analogWrite(ena2,70);
     digitalWrite(in3,0);
     digitalWrite(in4,1);
     Serial.println("Forward");
     }

     {
      analogWrite(ena1,70);
      digitalWrite(in1,0);
      digitalWrite(in2,1);
      analogWrite(ena2,70);
      digitalWrite(in3,1);
      digitalWrite(in4,0);
      Serial.println("RIGHT");
      }

      {
        analogWrite(ena1,70);
        digitalWrite(in1,1);
        digitalWrite(in2,0);
        analogWrite(ena2,70);
        digitalWrite(in3,0);
        digitalWrite(in4,1);
        Serial.println("LEFT");
        }

        {
          
          }
}    
