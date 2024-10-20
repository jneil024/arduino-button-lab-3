const int buttonPin = 2;    // Pin for the button
const int led1Pin = 8;      
const int led2Pin = 9;      
int buttonState = 0;      

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Use internal pull-up resistor for the button
  pinMode(led1Pin, OUTPUT);         // Set pin for LED1 as output
  pinMode(led2Pin, OUTPUT);         // Set pin for LED2 as output
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the state of the button

  if (buttonState == LOW) { // Button pressed (LOW because of the pull-up)
    digitalWrite(led1Pin, HIGH);  // Turn on LED1
    digitalWrite(led2Pin, LOW);   // Turn off LED2
  } else {
    digitalWrite(led1Pin, LOW);   // Turn off LED1
    digitalWrite(led2Pin, HIGH);  // Turn on LED2
  }
}
