#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  while (!Serial) { ; } // Wait for serial connection
}

void loop() {
  // Simple HTML page
  Serial.println("<!DOCTYPE html>");
  Serial.println("<html>");
  Serial.println("<head><title>Arduino Serial Web</title></head>");
  Serial.println("<body>");
  Serial.println("<h1>Hello from Arduino!</h1>");
  Serial.println("<p>Analog A0 value: " + String(analogRead(A0)) + "</p>");
  Serial.println("</body>");
  Serial.println("</html>");

  delay(1000); // Send every second
}