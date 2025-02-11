// Pin definitions
int ledPins[] = {2, 3, 4, 5, 6}; // Array to store LED pin numbers
int numLeds = 5; // Number of LEDs

void setup() {
  // Set all LED pins as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn on each LED one by one
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn LED ONQ
    delay(500); // Wait for 500 milliseconds
    digitalWrite(ledPins[i], LOW); // Turn LED OFF
  }
}
