//exp10)// Define the pins for ultrasonic sensor
const int trigPin = 2; // Trigger pin of ultrasonic sensor
const int echoPin = 3; // Echo pin of ultrasonic sensor

// Define the pin for the LED
const int ledPin = 13; // Built-in LED pin

// Define the maximum distance to detect an obstacle (in centimeters)
const int maxDistance = 50; 

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Initialize the ultrasonic sensor pins
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  
  // Initialize the LED pin
  pinMode(13, OUTPUT);
}

void loop() {
  // Trigger ultrasonic sensor to send a pulse
  digitalWrite(2, LOW);
  delayMicroseconds(2);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  
  // Measure the duration of the pulse returned by the ultrasonic sensor
  unsigned long duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance in centimeters
  int distance = duration * 0.034 / 2;
  
  // Print distance to serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if distance is less than the maximum distance
  if (distance < maxDistance) {
    // Turn on the LED to notify the user
    digitalWrite(13, HIGH);
  } else {
    // Turn off the LED
    digitalWrite(13, LOW);
  }
  
  // Delay for a short interval before taking the next measurement
  delay(100);
}
