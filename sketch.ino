#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
void setup()
{
  lcd.init();
  lcd.backlight();
}
void loop()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Hi! My name is");
  lcd.setCursor(1,1);
  lcd.print("V.S.BHAVIN KRISHNA");
  lcd.setCursor(0,3);
  lcd.print("My address is");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("153-G1/A1,New kumari");
  lcd.setCursor(0,1);
  lcd.print("colony, college road");
  lcd.setCursor(0,2);
  lcd.print("nagercoil,kanyakumari");
  delay(5000);
  lcd.clear();
  lcd.setCursor(3,1);
  lcd.print("THANK YOU!");
  delay(2000);
}
