#include <DHT.h>
DHT dht(13,DHT22);
void setup()
{
  Serial.begin(115200);
  dht.begin();
  pinMode(4, OUTPUT);
}
void loop()
{
  float temperature=dht.readTemperature();
  if (isnan(temperature))
  {
    Serial.println("Failed to read from dht sensor");
  }
  else
  {
    Serial.print("Temperature : ");
    Serial.println(temperature);
    if (temperature>=24)
    {
      digitalWrite(4,HIGH);
    }
    else{
      digitalWrite(4,LOW);
    }
  }
  delay(2000);
}
