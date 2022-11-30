#include <Arduino.h>

void setup() {
    Serial.begin(115200);  // Baud rate to see Serial.println messages (see also platform.ini)
}

void loop() {
    Serial.println("Hello world!");
    delay(2000);
}