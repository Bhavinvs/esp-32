#include "HX711.h"

// Define HX711 pins
#define DT  16    // Data pin
#define SCK  4    // Clock pin

HX711 scale;

void setup() {
  Serial.begin(115200);
  scale.begin(DT, SCK);

  Serial.println("Initializing the scale...");
  delay(1000);

  scale.set_scale(420);      //  calibration factor yet

   scale.tare();          // Always tare with NO load on the scale

  Serial.println("Scale ready. Place a weight.");
}

void loop() {
  float weight = scale.get_units(10); // average over 10 readings
  Serial.print("Weight: ");
  Serial.print(weight, 3);            // show 2 decimal places
  Serial.println(" kg");
  delay(1000);
}
