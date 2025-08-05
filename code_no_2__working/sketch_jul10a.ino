int leftsensor=11;
int middlesensor=12;
int rightsensor=13;
int ls,ms,rs;
void setup() {
  // put your setup code here, to run once:
pinMode(leftsensor,INPUT);
pinMode(middlesensor,INPUT);
pinMode(rightsensor,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
ls=digitalRead(leftsensor);
ms=digitalRead(middlesensor);
rs=digitalRead(rightsensor);
Serial.print(ls);
Serial.print("\t");
Serial.print(ms);
Serial.print("\t");
Serial.print(rs);
Serial.print("\n");

























































}
