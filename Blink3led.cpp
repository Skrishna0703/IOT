//exp 2)// Define the digital pins for the LEDs
const int ledPin1 = 2; // Pin for the first LED
const int ledPin2 = 3; // Pin for the second LED
const int ledPin3 = 4; // Pin for the third LED

// Define the time interval for LED blinking (in milliseconds)
const int blinkInterval = 1000; // Interval for each LED blink

// Variable to track the last time the LED states changed
unsigned long previousMillis = 0;

void setup() {
  // Initialize the digital pins as outputs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // Get the current time
  unsigned long currentMillis = millis();

  // Check if it's time to change the LED states
  if (currentMillis - previousMillis >= blinkInterval) {
    // Save the last time the LED states were changed
    previousMillis = currentMillis;

    // Toggle the state of the first LED
    digitalWrite(2, !digitalRead(ledPin1));

    // Toggle the state of the second LED
    digitalWrite(3, !digitalRead(ledPin2));

    // Toggle the state of the third LED
    digitalWrite(4, !digitalRead(ledPin3));
  }
}
