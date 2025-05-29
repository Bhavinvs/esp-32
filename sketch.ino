void setup()
{
  pinMode(4, OUTPUT);
  pinMode(25, INPUT);
  pinMode(26, INPUT);
}
void loop()
{
  int a=digitalRead(25);
  int b=digitalRead(26);
  if (a==LOW)
  {
    digitalWrite(4, HIGH);
  }
  if (b==LOW)
  {
    digitalWrite(4,LOW);
  }
}