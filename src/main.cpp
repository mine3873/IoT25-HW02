
#include <Arduino.h>

const int btnPin = 4;
const int ledPin = 5;

int btnState = 0;

void setup() {
  Serial.begin(115200);
  
  pinMode(btnPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  btnState = digitalRead(btnPin);
  if(btnState == LOW){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}