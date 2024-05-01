//exp 3)// Define the digital pins for the LEDs
const int ledPin1 = 2; // Pin for the first LED
const int ledPin2 = 3; // Pin for the second LED

// Set initial state for LED pins
bool ledState1 = LOW; // Initial state for the first LED
bool ledState2 = HIGH; // Initial state for the second LED

// Define the time intervals for LED blinking (in milliseconds)
const int blinkInterval = 1000; // Interval for each LED blink

// Variable to track the last time the LED state changed
unsigned long previousMillis = 0;

void setup() {
  // Initialize the digital pins as outputs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // Get the current time
  unsigned long currentMillis = millis();

  // Check if it's time to change the LED states
  if (currentMillis - previousMillis >= blinkInterval) {
    // Save the last time the LED states were changed
    previousMillis = currentMillis;

    // Toggle the state of the first LED
    ledState1 = !ledState1;
    // Update the LED pin with the new state
    digitalWrite(2, ledState1);

    // Toggle the state of the second LED
    ledState2 = !ledState2;
    // Update the LED pin with the new state
    digitalWrite(3, ledState2);
  }
}
