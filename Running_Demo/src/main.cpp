#include <Arduino.h>

#include <avr/io.h>


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  delay(1000);

  // Open serial communications and wait for port to open:
  // Serial.begin(57600);

  // // wait for serial port to connect. Needed for native USB port only
  // while (!Serial)
  // {
  // };

  //Serial.println("Ei Gude, wie?!");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}

