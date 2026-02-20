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

// ... setup from previous commit ...

void loop() {
    // Read the intensity from the LDR
    ldrValue = analogRead(LDR_PIN);

    Serial.print("LDR Value: ");
    Serial.println(ldrValue);

    delay(1000); // 1-second sampling interval
}