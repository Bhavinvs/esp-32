#include <ESP32Servo.h>
const int servopin=4;
const int openpin=35;
const int closepin=34;
Servo servo;
void setup()
{
  servo.attach(servopin);
  pinMode(34, INPUT);
  pinMode(35, INPUT);
}
void loop()
{
  int a=digitalRead(closepin);
  int b=digitalRead(openpin);
  if (a==LOW)
  {
    servo.write(90);
    delay(2000);
  }
    
  if (b==LOW)
  {  
    servo.write(0);
    delay(2000);   
  }
}
