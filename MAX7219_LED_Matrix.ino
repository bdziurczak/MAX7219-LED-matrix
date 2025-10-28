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

size_t counter = 0;
void loop() {
  display.clear();
  display.write(1, 0b01100000); // Display '1'
  display.write(3, 0b01011011); // Display '2'
  delay(2000);
  display.printMessage("HELLO", 500);
  delay(1000);
}
