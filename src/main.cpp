#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define RGB_PIN 48

Adafruit_NeoPixel pixel(1, RGB_PIN, NEO_GRB + NEO_KHZ800);

void colorCycle();

void setup() {
  pixel.begin();              // Initialize NeoPixel library
  pixel.clear();              // Clear all pixels
  pixel.setBrightness(255);   // Set brightness (0-255)
  randomSeed(analogRead(A0)); // Seed random generator
}

void loop() {
  colorCycle();               // Change colors
  pixel.show();               // Update NeoPixel
  delay(200);                 // Wait before next change
}

void colorCycle() {
  int r = random(0, 256);     // Generate random red value
  int g = random(0, 256);     // Generate random green value
  int b = random(0, 256);     // Generate random blue value

  pixel.setPixelColor(0, r, g, b); // Set pixel color
}