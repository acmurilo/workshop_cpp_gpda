//esse arquivo não é executável, ele é só para armazenar o exemplo do blink led
#include "Arduino.h" 

#define LED_PIN 13;
#define tempo 1000;

void setup(){
    pinMode(LED_PIN, OUTPUT);
}

void loop(){
    digitalWrite(LED_PIN, HIGH);
    delay(tempo);

    digitalWrite(LED_PIN, LOW);
    delay(tempo);
}