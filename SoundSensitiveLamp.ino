const int micPin = A0;          // Mic connected to A0
const int ledPins[] = {3, 2, 1}; // LEDs connected to digital 3, 2, 1
const int numLeds = 3;           // No of LEDs

// SENSITIVITY THRESHOLDS
const int thresholdGreen = 50;   // GREEN LED (high)
const int thresholdBlue = 60;    // BLUE LED (mid)
const int thresholdRed = 90;     // RED LED (low)

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600); // Initialize Serial Monitor
}

void loop() {
  int micValue = analogRead(micPin);

  Serial.print("Mic Value: ");
  Serial.println(micValue); // Print mic value

  // Led / mic Control statements
  if (micValue > thresholdGreen) {
    digitalWrite(ledPins[0], HIGH); // Green LED (high volume)
  } else {
    digitalWrite(ledPins[0], LOW);
  }

  if (micValue > thresholdBlue) {
    digitalWrite(ledPins[1], HIGH); // Blue LED (mid volume)
  } else {
    digitalWrite(ledPins[1], LOW);
  }

  if (micValue > thresholdRed) {
    digitalWrite(ledPins[2], HIGH); // Red LED (low volume)
  } else {
    digitalWrite(ledPins[2], LOW);
  }

  delay(100); // Small delay to make the changes visible
}
