
#include <dht.h>
#define DHT11_PIN 7
dht DHT;

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup()
 
  {
    lcd.begin();
    lcd.backlight();
  
  }

void loop() 

  {
    int chk = DHT.read11(DHT11_PIN);
    lcd.setCursor(0,0);
    lcd.print("Temp [C] = ");
    lcd.print(DHT.temperature);
  
    lcd.setCursor(0,1);
    lcd.print("Hum. [%] = ");
    lcd.print(DHT.humidity);

    delay(5000);

  }
