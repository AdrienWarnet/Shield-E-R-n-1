
const int buttonPin = A3;     
const int ledPin = 7;      
int buttonState = 0;        

void setup() {  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {  
  buttonState = digitalRead(buttonPin);  
  if (buttonState == LOW) {    
    digitalWrite(ledPin, LOW);
  } else {    
    digitalWrite(ledPin, HIGH);
  }
}
