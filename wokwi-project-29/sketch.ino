void setup()
{
  pinMode(4, OUTPUT);
  pinMode(34, INPUT);
}
void loop()
{
  int a=digitalRead(34);
  if (a==HIGH)
  {
    digitalWrite(4, HIGH);
    delay(1000);
  }
  else{
    digitalWrite(4,LOW);
  }
}
