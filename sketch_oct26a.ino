const int buttonPin = 2;  // the number of the pushbutton pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {

  pinMode(buttonPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    Serial.print("Hello World!");
    delay(450);
  } 
  else {
    // turn LED off:
    
  }
}