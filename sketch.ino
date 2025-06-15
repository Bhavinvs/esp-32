#include <OneWire.h>
#include <DallasTemperature.h>
 
// GPIO where the DS18B20 is connected to
const int temp= 4;    
 
// Setup a oneWire instance to communicate with any OneWire devices
OneWire onewire(temp);
 
// Pass our oneWire reference to Dallas Temperature sensor
DallasTemperature sensor(&onewire);
 
void setup() {
  // Start the Serial Monitor
  Serial.begin(115200);
  // Start the DS18B20 sensor
  sensor.begin();
}
 
void loop() {
  sensor.requestTemperatures();
  float temperatureC = sensor.getTempCByIndex(0);
  float temperatureF = sensor.getTempFByIndex(0);
  Serial.print(temperatureC);
  Serial.println(" C");
  Serial.print(temperatureF);
  Serial.println(" F");
  delay(3000);
}