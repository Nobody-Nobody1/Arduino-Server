#include <Arduino.h>

void setup() {
    Serial.begin(9600); // Start serial at 9600 baud
    Serial.println("Hello from Arduino!");
}

void loop() {
    if (Serial.available() > 0) {
        String input = Serial.readStringUntil('\n');
        Serial.print("You sent: ");
        Serial.println(input);
    }
}