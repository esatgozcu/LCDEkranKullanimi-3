#include <LiquidCrystal.h>

// lcd (rs,e,d4,d5,d6,d7)

LiquidCrystal lcd(8,7,6,5,4,3);

byte smile[8] ={

      B00000,
      B00000,
      B01010,
      B00000,
      B10001,
      B01110,
      B00000,
      B00000,
};

byte arrow[8] ={

      B00100,
      B01110,
      B11111,
      B00100,
      B00100,
      B00100,
      B00100,
      B00100,
};

byte heart[8] ={

      B00000,
      B01010,
      B11111,
      B11111,
      B01110,
      B00100,
      B00000,
      B00000,
};

void setup() {
  
  lcd.begin(16,2);

  lcd.createChar(0,smile);
  lcd.createChar(1,arrow);
  lcd.createChar(2,heart);
}

void loop() {

  lcd.clear();
  delay(2000);

  lcd.setCursor(0,0);
  lcd.write(byte(0));

  delay(2000);

  lcd.setCursor(2,0);
  lcd.write(byte(1));
  
  delay(2000);

  lcd.setCursor(4,0);
  lcd.write(byte(2));
  
  delay(2000);
}




