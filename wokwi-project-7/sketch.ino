const int ldr=34;
const int relay=4;
void setup()
{
  pinMode(ldr, INPUT);
  pinMode(relay, OUTPUT);
}
void loop()
{
  int a=digitalRead(34);
  if (a==HIGH)
  {
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4,LOW);
  }
}
