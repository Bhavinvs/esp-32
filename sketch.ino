void setup()
{
  pinMode(4, OUTPUT);

}
void loop()
{
  int a;
  int b;
  for (a=100;a<=2000;a=a+100)
  {
    tone(4,a);
    delay(100);
  }
  for (b=1900;b>=200;b=b-100)
  {
    tone(4,b);
    delay(100);
  }
}