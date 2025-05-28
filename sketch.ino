void setup()
{
  pinMode(27, INPUT);
  pinMode(4, OUTPUT);
}
void loop()
{
  int a=digitalRead(27);
  if (a==LOW)
  {
    digitalWrite(4,HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }
}
