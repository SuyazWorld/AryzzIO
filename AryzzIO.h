#ifndef ARYZZIO_h
#define ARYZZIO_h

#include "Arduino.h"

void setupled(byte pinz, bool statusinputoutput){
    pinMode(pinz, statusinputoutput); //INPUT itu bool 0, OUTPUT itu boolean 1
}
void ledon(byte pinznum, bool boolz){
    digitalWrite(pinznum, boolz);
}

#endif