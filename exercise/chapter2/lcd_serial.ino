//import library to create object
#include <Adafruit_LiquidCrystal.h>; // use for ???????? LCD

Adafruit_LiquidCrystal lcd(0x20); // Creat an object lcd and set lcd address
void setup()
{
	lcd.begin(16, 2); //set lcd 16x2
	lcd.setCursor(0, 1); // set Cursor column 0 row 1
	lcd.print("Hello world");
}

void loop()
{
	int n=0;
	// When send data from serial monitor to serial buffer(64-byte) is greater 0
	if (Serial.available() > 0) {
		// ?????????????? ???????????
		n = Serial.parseInt(); 
	}
}
