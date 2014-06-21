#ifndef LED_H_
#define LCD_H_

#include <Arduino.h>
#include <SPI.h>
#include "charlib.h"

#define AO_DATA HIGH
#define AO_COMMAND LOW

class LCD
{
    public:
        LCD(int, int, int);
        void set_cs(bool);
        void set_reset(bool);
        void set_ao(bool);
        void set_page(int, int);
        void sendCommand(int);
        void sendData(int);
        bool putAsciiChar(int, int, char);
        void putAsciiString(int, int, char*);
        void putBigChar(int, int, unsigned int);
        void putBigString(int, int, unsigned int*);
        void init();
        void clear();
        //void set(int, int);
        
    private:
        int cs_pin, reset_pin, ao_pin;
};

void SPIbegin();
void SPIend();

#endif
