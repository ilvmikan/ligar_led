#include "led.h"
#include <Arduino.h>

#define PINO_LED 13

void iniciarLed() {
    pinMode(PINO_LED, OUTPUT);
}

void piscarLed() {
    digitalWrite(PINO_LED, HIGH);
    delay(1000);
    digitalWrite(PINO_LED, LOW);
    delay(1000);
}
