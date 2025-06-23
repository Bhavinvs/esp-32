#include "HX711.h"
#define DT  16    
#define SCK  4  
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
HX711 scale;
void setup() {
  Serial.begin(115200);
  lcd.init();
  lcd.backlight();
  scale.begin(DT, SCK);
  pinMode(14, OUTPUT);
  pinMode(26, INPUT);
  lcd.setCursor(0,1);
  lcd.print("Unload the hook, and");
  lcd.setCursor(0,2);
  lcd.print("then press button!");
  delay(10);
  while (digitalRead(26)==HIGH)
  {
  }
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Initializing the ");
  lcd.setCursor(0,1);
  lcd.print("scale...");
   
  scale.set_scale(420);  
  scale.tare();
delay(1000);
lcd.clear();
  lcd.setCursor(0,0);      
  lcd.print("Scale ready. ");
  lcd.setCursor(0,1);
  lcd.print("Place a weight.");
  lcd.setCursor(0,2);
  lcd.print("And then press");
  lcd.setCursor(4,3);
  lcd.print("the button");
  delay(500);
 
  while (digitalRead(26)==HIGH)
  {
 
  }
}
 
void loop() {
 
 
    float weight = scale.get_units(10);
    Serial.println(weight);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("Weight: ");
    lcd.setCursor(9,1);
    lcd.print(weight,3);
    lcd.setCursor(17,1);
    lcd.print("kg");
    delay(100);
 
    if (weight<=0.100)
    {
      for (int b=100;b<=1500;b=b+100)
      {
        tone(14,b);
        delay(100);
      }
      for (int b=1400;b>=200;b=b-100)
      {
        tone(14,b);
        delay(100);
      }
    }
 
    else{
      noTone(14);
      delay(500);
    }
 
}