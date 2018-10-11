#include <Arduino.h>
#include "stepper.h"

void setup() {
    Stepper motor1 = {D1, D2, D3, D4};
    Stepper motor2 = {D5, D6, D7, D8, 0};

    stepperOff(motor1);
    stepperOff(motor2);
}

void loop() {
}