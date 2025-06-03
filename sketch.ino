void setup() {
  Serial.begin(115200);

}

void loop() {
    int a = analogRead(34);
    Serial.println(a);
    delay(500);
  
}
