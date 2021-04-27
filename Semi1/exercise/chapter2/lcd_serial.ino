//import library to create object
#include <Adafruit_LiquidCrystal.h>; // use this library for usr LCD

Adafruit_LiquidCrystal lcd(0x20); // Creat an object lcd and set lcd address
void setup()
{
	lcd.begin(16, 1); //set lcd 16x2
	lcd.setCursor(0, 1); // set Cursor column 0 row 1
	lcd.print("");
}

void loop()
{
}
