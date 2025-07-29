// Author: Anthony Yalong
// Description: Simple blinking LED developed using the Arduino framework.

// Includes
#include <Arduino.h>

// Defines
#define LED_PIN 2         // Built-In LED
#define LED_DELAY 1000    // Delay in milliseconds

// State logic
bool led_state = false;

void setup() {
  // Setup logging
  Serial.begin(115200);
  Serial.println("ESP32 LED Blink Starting...");

  // Setup GPIO
  pinMode(LED_PIN, OUTPUT);

  // Initial State
  digitalWrite(LED_PIN, led_state);
}

void loop() {
  led_state = !led_state;
  digitalWrite(LED_PIN, led_state);
  Serial.print("Blinking LED 1 (Arduino): ");
  Serial.println(led_state ? "LED ON" : "LED OFF");
  delay(LED_DELAY);
}