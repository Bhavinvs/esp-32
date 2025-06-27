#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>
DHT dht(26,DHT22);
#define SCREEN_WIDTH 128 // OLED width,  in pixels
#define SCREEN_HEIGHT 64 // OLED height, in pixels

// create an OLED display object connected to I2C
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);
  dht.begin();
  // initialize OLED display with I2C address 0x3C
  if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("failed to start SSD1306 OLED");
    while (1);
  }

  delay(2000);         // wait two seconds for initializing
 
}

void loop() {
  float t=dht.readTemperature();
  float h=dht.readHumidity();
  if (isnan(t)||isnan(h))
  {
    Serial.println("Failed to read from dht sensor");
    oled.clearDisplay();
    oled.setCursor(10,10);
    oled.println("Failed to read");
    oled.setCursor(30,20);
    oled.println("from dht sensor");
    oled.display();
    delay(1000);
  }
  else{
    oled.clearDisplay(); // clear display
    oled.setTextSize(1);         // set text size
    oled.setTextColor(WHITE);    // set text color
    oled.setCursor(0,10);       // set position to display (x,y)
    oled.println("TEMPERATURE :"); // set text
    oled.setCursor(80,10);
    oled.println(t);
    oled.setCursor(110,10);
    oled.println("C");
    oled.setCursor(0,30);
    oled.println("HUMIDITY : ");
    oled.setCursor(75,30);
    oled.println(h);
    oled.setCursor(110,30);
    oled.println("%");
    oled.display();
    delay(3000);
  }
}
