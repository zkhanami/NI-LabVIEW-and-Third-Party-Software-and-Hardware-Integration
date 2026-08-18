#define LED 13 // Define the pin number for the LED

int variable; // Variable to store incoming data

void setup() {
  Serial.begin(9600); // Set the communication baud rate to 9600
  pinMode(LED, OUTPUT); // Set pin 13 as an output for the LED
}

void loop() {
  // Check if data is available to read from the serial port
  if (Serial.available()) {
    variable = Serial.read(); // Read the incoming data

    // If the received data is 'H', turn the LED on
    if (variable == 'H') {
      digitalWrite(LED, HIGH); // Turn the LED on (HIGH)
    } 
    // If the received data is 'L', turn the LED on
    if (variable == 'L') {
      digitalWrite(LED, LOW); // Turn the LED off (LOW)
    } 
  }
}
