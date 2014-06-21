#ifndef CHARLIB_H_
#define CHARLIB_H_

#define ASCIICHAR_W 8
#define ASCIICHAR_H 16
#define BIGCHAR_H 16
#define BIGCHAR_W 16

#include <avr/pgmspace.h>

extern PROGMEM unsigned char asciicharlib[][16];
extern PROGMEM unsigned char bigcharlib[][16];

#endif
