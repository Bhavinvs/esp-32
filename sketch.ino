#include <ESP32Servo.h>

const int servopin = 5;

Servo servo;

int pos = 0;

void setup() {
  servo.attach(servopin);
}



void loop() {
  for (pos = 0; pos <= 90; pos=pos+1) {
    servo.write(pos);
    delay(15);
  }
  for (pos = 90; pos >= 0; pos=pos-1) {
    servo.write(pos);
    delay(15);
  }
}

