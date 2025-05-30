void setup()
{
  pinMode(27, INPUT);
  pinMode(5, OUTPUT);
}
void loop()
{
  int a=digitalRead(27);
  if (a==LOW)
  {
    tone(5,200);
    delay(500);
    tone(5,400);
    delay(500);
    tone(5,600);
    delay(500);
    tone(5,400);
    delay(500);
  }
  else
  {
    noTone(5);
  }
}
