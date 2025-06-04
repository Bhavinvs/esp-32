void setup()
{
  pinMode(4,OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop()
{
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(13, LOW);
  delay(10000);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(13, LOW);
  delay(3000);
  digitalWrite(13, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10000);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(13, LOW);
  delay(3000);
}
