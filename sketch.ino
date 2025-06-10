void setup()
{
  pinMode(34, INPUT);
  pinMode(4, OUTPUT);
}
void loop()
{
  int a=digitalRead(34);
  if (a==LOW)
  {
    for (int b=10;b<=1000;b=b+200)
    {
      tone(4,b);
      delay(20);
    }
    for (int c=1000;c>10;c=c-200)
    {
      tone(4,c);
      delay(20);
    }
  }
  else{
    noTone(4);
  }
}