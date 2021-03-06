#ifndef CHARACTER_H
#define CHARACTER_H

#include <avr/pgmspace.h>
#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

// Character functions

#define CHAR_HEIGHT 7
#define CHAR_WIDTH  5
#define CHAR_COUNT  13 // '0'-'9', '°' , '%', '-'

const byte charSet[CHAR_COUNT*CHAR_HEIGHT] PROGMEM = 
{
   B01110000,
   B10001000,
   B10001000,
   B10001000,
   B10001000,
   B10001000,
   B01110000, // '0'

   B00100000,
   B01100000,
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B01110000, // '1'
 
   B01110000,
   B10001000,
   B00001000,
   B00110000,
   B01000000,
   B10000000,
   B11111000, // '2'

   B01110000,
   B10001000,
   B00001000,
   B00110000,
   B00001000,
   B10001000,
   B01110000, // '3' 

   B00010000,
   B00110000,
   B01010000,
   B10010000,
   B11111000,
   B00010000,
   B00010000, // '4' 
 
   B11111000,
   B10000000,
   B11110000,
   B00001000,
   B00001000,
   B10001000,
   B01110000, // '5'
 
   B00110000,
   B01000000,
   B10000000,
   B11110000,
   B10001000,
   B10001000,
   B01110000, // '6'

   B11111000,
   B00001000,
   B00010000,
   B00100000,
   B01000000,
   B01000000,
   B01000000, // '7'

   B01110000,
   B10001000,
   B10001000,
   B01110000,
   B10001000,
   B10001000,
   B01110000, // '8'

   B01110000,
   B10001000,
   B10001000,
   B01111000,
   B00001000,
   B00010000,
   B01100000, // '9'

   B11100000,
   B10100000,
   B11100000,
   B00000000,
   B00000000,
   B00000000,
   B00000000, // '°'

   B00000000,
   B11000000,
   B11010000,
   B00100000,
   B01000000,
   B10110000,
   B00110000, // '%'

   B00000000,
   B00000000,
   B00000000,
   B01110000,
   B00000000,
   B00000000,
   B00000000 // '-'
};

// Adds a character to the frame with the specified offsets
void addCharToFrame(byte offsetX, byte offsetY, byte charIndex );

#endif

