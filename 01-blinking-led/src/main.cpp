#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    Serial.println("LED OFF");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(2000);
    Serial.println("LED ON");
    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);
}