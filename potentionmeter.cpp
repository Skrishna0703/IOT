//exp 7)// Define analog pin connections for potentiometers
const int RED_PIN = A0;
const int GREEN_PIN = A1;
const int BLUE_PIN = A2;

// Define pins for RGB LED
const int RED_LED_PIN = 9;
const int GREEN_LED_PIN = 10;
const int BLUE_LED_PIN = 11;

void setup() {
  // Set up RGB LED pins as outputs
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // Read analog values from potentiometers
  int redValue = analogRead(A0);
  int greenValue = analogRead(A1);
  int blueValue = analogRead(A2);

  // Map potentiometer values (0-1023) to PWM duty cycle (0-255)
  int redDutyCycle = map(redValue, 0, 1023, 0, 255);
  int greenDutyCycle = map(greenValue, 0, 1023, 0, 255);
  int blueDutyCycle = map(blueValue, 0, 1023, 0, 255);

  // Update PWM duty cycle for each color
  analogWrite(9, redDutyCycle);
  analogWrite(10, greenDutyCycle);
  analogWrite(11, blueDutyCycle);

  delay(100); // Delay for smoothness
}/
