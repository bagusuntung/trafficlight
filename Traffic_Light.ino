/*
  Blink
Traffic Lights By Bagus
 */
int ledMerah = 13;
int ledKuning = 12;
int ledHijau = 11;

void setup() {                

  pinMode(ledMerah, OUTPUT);  
  pinMode(ledKuning, OUTPUT); 
  pinMode(ledHijau, OUTPUT);   
}

void loop() {
  digitalWrite(ledMerah, HIGH);  
  digitalWrite(ledKuning, LOW); 
  digitalWrite(ledHijau, LOW);
  delay(2000);

  digitalWrite(ledMerah, LOW);  
  digitalWrite(ledKuning, HIGH); 
  digitalWrite(ledHijau, LOW);
  delay(1000);
  
  digitalWrite(ledMerah, LOW);  
  digitalWrite(ledKuning, LOW); 
  digitalWrite(ledHijau, HIGH);
  delay(2500);
}
