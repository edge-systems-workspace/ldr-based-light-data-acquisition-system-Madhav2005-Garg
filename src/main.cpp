#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 */

#define LDR_PIN A0

int ldrValue = 0;
int threshold = 500;

void setup() {
    Serial.begin(9600);
    Serial.println("LDR Light Intensity Monitoring System - Initialized");
    delay(1000);
}

void loop() {
    ldrValue = analogRead(LDR_PIN);

    Serial.print("LDR Value: ");
    Serial.println(ldrValue);

    // Conditional logic based on light intensity
    if (ldrValue > threshold) {
        Serial.println("Status: Bright Environment");
    } else {
        Serial.println("Status: Dark Environment");
    }

    Serial.println("-----------------------------");
    delay(1000);
}