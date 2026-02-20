#include <Arduino.h>

#define LDR_PIN A0

int ldrValue = 0;
int threshold = 500; // Calibrated for average room light

// ... definitions from previous commit ...

void setup() {
    Serial.begin(9600);
    Serial.println("LDR Light Intensity Monitoring System - Initialized");
    delay(1000);
}

void loop() {
}