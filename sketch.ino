void setup()
{
  pinMode(5, OUTPUT);
  pinMode(34, INPUT);
}
void loop()
{
  int a=digitalRead(34);
  if (a==HIGH)
  {
    tone(5,200);
    delay(200);
    tone(5,400);
    delay(200);
    tone(5,600);
    delay(200);
    tone(5,400);
    delay(200);
  }
  else{
    noTone(5);
  }
}