#define ADDRESS        21L
#define LCD_CS A3
#define LCD_RST A2
#define LCD_AO A0

#include "use_lcd.h"
#include <SPI.h>

void setup()
{
  Serial.begin(9600);
  initLCD();
  showInit();
  delay(1000);
  lcd.clear();
}

void loop()
{
    showData();
    delay(3000);
    illu=millis()/100;
    //showSending();
    //delay(100);
}
