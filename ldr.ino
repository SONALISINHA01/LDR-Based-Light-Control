int ledPin = 13; // Using pin 13 for the LED
int ldrPin = A0; // Using analog pin A0 for the LDR
int ldrValue = 0; // Variable to store the LDR value

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as an output
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop() {
  ldrValue = analogRead(ldrPin); // Read the value from the LDR
  Serial.print("LDR Value: ");
  Serial.println(ldrValue); // Print the LDR value to the serial monitor

  if (ldrValue < 500) { // Check if the light level is below a threshold (you can adjust this value)
    digitalWrite(ledPin, HIGH); // Turn the LED on
  } else {
    digitalWrite(ledPin, LOW); // Turn the LED off
  }
  delay(100); // Small delay to stabilize readings
}
