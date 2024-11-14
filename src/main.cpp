#include <Arduino.h>
#include <Adafruit_NeoPixel.h>


#define RGB_PIN 18


Adafruit_NeoPixel pixel(1, RGB_PIN, NEO_GRB+NEO_KHZ800);
// put function declarations here:
void colorCycle();

void setup() {
  pixel.begin();
  pixel.clear();
}

void loop() {
  colorCycle();
  pixel.show();
  delay(200);
}

// put function definitions here:
void colorCycle() {
  int r = rand() % 255 +1;
  int g = rand() % 255 +1;
  int b = rand() % 255 +1;

  pixel.setPixelColor(0, pixel.Color(255, 0, 0));  
}