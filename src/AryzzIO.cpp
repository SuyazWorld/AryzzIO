#include <AryzzIO.h>

void setup() {
  setupled(12, 1); //(pin12, OUTPUT);
  //setupled(13,0); //(pin13, INPUT)

}

void loop() {
  ledon(12,1); //(pin 12, HIGH)
  delay(500);
  edon(12,0); //(pin 12, LOW)
  delay(500);
}
