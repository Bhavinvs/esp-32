const int On= 34;
const int Off = 35;
const int Relay = 5;
void setup() 
{
  pinMode(On, INPUT);
  pinMode(Off, INPUT);
  pinMode(Relay, OUTPUT);
}

void loop() 
{
  int a=digitalRead(On);
  int b=digitalRead(Off);
  if(a==HIGH) 
  {
    digitalWrite(Relay, HIGH);
  }
  if(b==HIGH) 
  {
    digitalWrite(Relay, LOW);
  }
 }