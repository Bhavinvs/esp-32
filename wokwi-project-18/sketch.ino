#include <DHT.h>
DHT dht(4,DHT22);
void setup()
{
  Serial.begin(115200);
  dht.begin();
}
void loop()
{
  float humidity=dht.readHumidity();
  float temperature=dht.readTemperature();
  if (isnan(humidity)||isnan(temperature))
  {
    Serial.println("Failed to read from dht sensor");
  }
  else
  {
    Serial.print("Temperature : ");
    Serial.print(temperature);
    Serial.print(" °C , Humidity : ");
    Serial.print(humidity);
    Serial.println("%");
  }
  delay(2000);
}
