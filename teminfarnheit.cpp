//exp 9)// Define the analog pin where the temperature sensor is connected
const int sensorPin = A0;

// Variables to hold the maximum and minimum temperatures seen
float maxTemp = -1000; // Initialize to a very low value
float minTemp = 1000;  // Initialize to a very high value

void setup() {
  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the voltage from the temperature sensor
  int sensorValue = analogRead(sensorPin);

  // Convert the analog value to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Convert the voltage to temperature in Celsius
  float temperatureC = (voltage - 0.5) * 100.0;

  // Convert Celsius to Fahrenheit
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

  // Update maximum temperature
  if (temperatureC > maxTemp) {
    maxTemp = temperatureC;
  }

  // Update minimum temperature
  if (temperatureC < minTemp) {
    minTemp = temperatureC;
  }

  // Print the temperatures to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C, ");
  Serial.print(temperatureF);
  Serial.println(" °F");

  // Print the maximum and minimum temperatures seen
  Serial.print("Max Temp: ");
  Serial.print(maxTemp);
  Serial.print(" °C, Min Temp: ");
  Serial.print(minTemp);
  Serial.println(" °C");

  // Delay for a short interval before reading the sensor again
  delay(1000);
}
