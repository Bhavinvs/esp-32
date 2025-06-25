
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(34, INPUT);
  pinMode(13, INPUT);
 
}
void loop()
{
  int a=digitalRead(13);
  int b=digitalRead(34);
 
  if (a==HIGH)
  {
    digitalWrite(4, HIGH);
    delay(1000);
  }
   if (b==HIGH)
  {
    digitalWrite(4,LOW);
    delay(1000);
  }
}