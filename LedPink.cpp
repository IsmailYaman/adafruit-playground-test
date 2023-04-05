#include "LedPink.h"
#include <Adafruit_CircuitPlayground.h>

LedPink::LedPink() {}

void LedPink::blink() {
  CircuitPlayground.setPixelColor(0, 255, 0, 99);
  CircuitPlayground.setPixelColor(1, 255, 0, 255);
  CircuitPlayground.setPixelColor(2, 255, 0, 99);
  CircuitPlayground.setPixelColor(3, 255, 0, 255);
  CircuitPlayground.setPixelColor(4, 255, 0, 99);
  delay(1000);
  CircuitPlayground.clearPixels();
  CircuitPlayground.setPixelColor(5, 255, 0, 255);
  CircuitPlayground.setPixelColor(6, 255, 0, 99);
  CircuitPlayground.setPixelColor(7, 255, 0, 255);
  CircuitPlayground.setPixelColor(8, 255, 0, 99);
  CircuitPlayground.setPixelColor(9, 255, 0, 255);
  delay(1000);
  CircuitPlayground.clearPixels();
}  
    
