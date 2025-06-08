#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup()
{
  lcd.init();
  lcd.backlight();
}
void loop()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("MY NAME IS");
  lcd.setCursor(0,1);
  lcd.print("BHAVIN KRISHNA");
  delay(5000);
  lcd.clear();
  lcd.setCursor(6,0);
  lcd.print("What is ");
  lcd.setCursor(5,1);
  lcd.print("your name?");
  delay(3000);
}