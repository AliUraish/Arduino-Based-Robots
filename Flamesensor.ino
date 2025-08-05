#define BLYNK_PRINT Serial
#include<BlynkSimpleEsp8266.h>
#include<ESP8266WiFi.h>

#define Flamesensor D5
int flameread;

WidgetTerminal flame(V4);

char auth[] = "e1kTsOOhGZrlZhn8nVM_uYUn2oNpcFlp";
char ssid[] = "TP-Link_AF58";
char pass[] = "dlrripd789122";

void setup() {
  // put your setup code here, to run once:
pinMode(Flamesensor,INPUT);
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
}

void loop() {
  // put your main code here, to run repeatedly:
flameread=digitalRead(Flamesensor);
Serial.println(flameread);
flame.print(flameread);
Blynk.run();
}
