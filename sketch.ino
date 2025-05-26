void setup() {
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  
}

void loop() {
  digitalWrite(5,HIGH);
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(5,LOW);
  digitalWrite(2,HIGH);
  delay(1000);
}
