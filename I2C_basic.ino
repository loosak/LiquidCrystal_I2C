#include <Wire.h> 
#include "LiquidCrystal_I2C.h"

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  

void setup() {
	lcd.clear();
	lcd.begin(20,4);               // initialize the lcd
	lcd.backlight();
	lcd.home ();                   // go home
  	lcd.print("Hello World!");  
  	lcd.setCursor ( 3, 1 );        // sloupec collumn, radek line
  	lcd.print ("from ARDUINO");
  	lcd.setCursor ( 11, 2 );
  	lcd.print ("with love"); 
}

void loop() {
	for ( int i = 0; i < 20; i++ ) {
		lcd.setCursor ( i , 3 ); lcd.print ("*");
		delay(400);
		lcd.setCursor ( i , 3 ); lcd.print ("/");
		delay(400);
		lcd.setCursor ( i , 3 ); lcd.print ("+");
		delay(400);
		lcd.setCursor ( i , 3 ); lcd.print ("-");
		delay(400);
		lcd.setCursor ( i , 3 ); lcd.print (" ");
	} 
}