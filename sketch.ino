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
  delay(50);
  if (a>=2000)
  {
    for (int i=400;i<=1500;i+=100)
    {
      tone(4,i);
      delay(50);
    }
    for (int i=1400;i>=600;i-=100)
    {
      tone(4,i);
      delay(50);
    }
  }
  else{
    noTone(4);
    
  }
}