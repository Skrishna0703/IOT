exp 6)void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Wait for the serial port to open
  while (!Serial) {
    ;
  }
  
  // Prompt the user to enter a number
  Serial.println("Enter a number:");
}

void loop() {
  // Check if data is available to read from the Serial Monitor
  if (Serial.available() > 0) {
    // Read the entered number
    int number = Serial.parseInt();
    
    // If a valid number is entered
    if (number != 0) {
      // Square the entered number
      int square = number * number;
      
      // Print the squared number to the Serial Monitor
      Serial.print("The square of ");
      Serial.print(number);
      Serial.print(" is ");
      Serial.println(square);
      
      // Prompt the user to enter another number
      Serial.println("Enter another number:");
    }
    // If an invalid number or non-numeric input is entered
    else {
      // Clear the serial buffer
      while (Serial.available() > 0) {
        Serial.read();
      }
      
      // Prompt the user to enter a valid number
      Serial.println("Invalid input. Please enter a number:");
    }
  }
}
