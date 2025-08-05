#define BUILTIN_LED1 D5
#define BUILTIN_LED2 D6
void setup() {
  pinMode(BUILTIN_LED1, OUTPUT); 
 pinMode(BUILTIN_LED2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(BUILTIN_LED1, LOW);   // Turn the LED on (Note that LOW is the voltage level
  delay(1000);                                  // but actually the LED is on; this is because 
    digitalWrite(BUILTIN_LED2, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(1000);
   digitalWrite(BUILTIN_LED2, LOW);   // Turn the LED on (Note that LOW is the voltage level
  delay(1000);                                  // but actually the LED is on; this is because 
    digitalWrite(BUILTIN_LED1, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(1000);
  
