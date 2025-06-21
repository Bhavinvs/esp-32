const int trigPin = 5;
const int echoPin = 4;
long duration;
float distance;
void setup() {
  Serial.begin(115200);
  pinMode(16, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.034) / 2; 
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);
  if (distance>=180)
  {
    digitalWrite(16,HIGH);
  }
  if(distance<=20)
  {
    digitalWrite(16,LOW);
  }
}
