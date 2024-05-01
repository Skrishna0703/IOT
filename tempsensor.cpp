//exp8) // Define the analog pin where the temperature sensor is connected
const int sensorPin = A0;

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

  // Print the temperature to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  // Delay for a short interval before reading the sensor again
  delay(1000);
}
