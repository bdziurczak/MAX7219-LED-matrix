#include <stdint.h>

#ifndef Max7219LedMatrix_H
#define Max7219LedMatrix_H

#include <Arduino.h>
#include <stdint.h>

class Max7219LedMatrix {
  public:
    Max7219LedMatrix(int clk_pin, int cs_pin, int din_pin);
    void begin();
    void write(uint8_t address, uint8_t value);
    void clear();
    void setBrightness(uint8_t brightness);
    /*
    *This function takes in ASCII string and displays each letter one after the other with some delay
    */
    void printMessage(const char* str, unsigned int delay_ms);
    int clk_pin, cs_pin, din_pin;
    void writeByte(uint8_t data);
};
#endif