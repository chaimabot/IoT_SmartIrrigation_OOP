#include "pump/PumpController.h"
#include <LiquidCrystal_I2C.h>
#include <Arduino.h>

PumpController::PumpController() {}

void PumpController::begin() {
    pinMode(LED_PIN, OUTPUT);
}

void PumpController::controlPump(float humidity, float temperature) {
    if (humidity > 60.0 || temperature > 30.0) {
        digitalWrite(LED_PIN, HIGH);  // Active la LED (pompe)
    } else {
        digitalWrite(LED_PIN, LOW);   // Désactive la LED (pompe)
    }
}
