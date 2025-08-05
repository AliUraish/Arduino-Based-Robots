int ena1=5;
int ena2=6;
int in1=7;
int in2=8;
int in3=9;
int in4=10;
char a;

void setup() {
  // put your setup code here, to run once:
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
while(Serial.available()>0)
{
  a=Serial.read();
}
Serial.println(a);
if(a=='F')
{
   analogWrite(ena1,255);
   analogWrite(ena2,255);
   digitalWrite(in1,0);
   digitalWrite(in2,1);
   digitalWrite(in3,0);
   digitalWrite(in4,1);
}
    
  else if(a=='B')
  {
    analogWrite(ena1,255);
    analogWrite(ena2,255);
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    
  }

      else if(a=='R')
      {
      analogWrite(ena1,0);
      analogWrite(ena2,255);
      digitalWrite(in1,0);
      digitalWrite(in2,1);
      digitalWrite(in3,0);
      digitalWrite(in4,1); 
      
    }  

     else if(a=='L')
     {
      analogWrite(ena1,255);
      analogWrite(ena2,0);
      digitalWrite(in1,0);
      digitalWrite(in2,1);
      digitalWrite(in3,0);
      digitalWrite(in4,1);
     }
        
          else if(a=='S')
     {
      analogWrite(ena1,0);
      analogWrite(ena2,0);
      
     }
    }           
    
    
