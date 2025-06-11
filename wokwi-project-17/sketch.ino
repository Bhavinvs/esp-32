void setup()
{
  Serial.begin(115200);
  pinMode(34, INPUT);
  pinMode(4, OUTPUT);
}
void loop()
{
  int a=analogRead(34);
  Serial.println(a);
  if (a>=2000)
  {
    for (int b=10;b<=1000;b=b+200)
    {
      tone(4,b);
      delay(100);
    }
    for (int c=1000;c>10;c=c-200)
    {
      tone(4,c);
      delay(100);
    }
  }
  else{
    noTone(4);
  }
}
