#include "Max7219LedMatrix.h"
const int PIN_CLK = 11;
const int PIN_CS = 12;
const int PIN_DIN = 13;


Max7219LedMatrix display(PIN_CLK, PIN_CS, PIN_DIN);
void setup() {
  display.begin();
  display.setBrightness(0x00);
  Serial.begin(9600);
}

void loop() {
  display.clear();
  delay(2000);
  display.printMessage("BARTEK", 500);
  delay(1000);
}
