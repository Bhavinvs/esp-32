const int buzzer=4;
const int ldr=34;
void setup() 
{
  Serial.begin(115200);
  pinMode(ldr, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() 
{
 int a=analogRead(ldr);
 Serial.println(a);
 delay(500);
 if (a>=1500)

  {
  tone(buzzer,400);
  }
  else
  {
    noTone(buzzer);
  }
 
} 
