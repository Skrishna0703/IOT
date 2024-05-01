//exp 5)
const int greenLedPin = 2;
const int yellowLedPin = 3;
const int redLedPin = 4;

void setup() {
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

  
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char userInput = Serial.read();

   
    switch (userInput) {
      case 'b':
        blinkGreen();
        break;
      case 'g':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        break;
      case 'y':
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        break;
      case 'r':
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        break;
      default:
        
        break;
    }
  }
}

void blinkGreen() {
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);
}
