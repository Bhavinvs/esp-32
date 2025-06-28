#define stepPin 5
#define dirPin 4

void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);

  // Set the motor direction (HIGH = one direction, LOW = the other)
  digitalWrite(dirPin, HIGH);

}

void loop() {
  // Generate step pulse to make the motor rotate
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(10000);  // Adjust this value to control the speed
  digitalWrite(stepPin, LOW);
  delayMicroseconds(10000);
}

