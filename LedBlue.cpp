#include "LedBlue.h"
#include <Adafruit_CircuitPlayground.h>

LedBlue::LedBlue() {}

void LedBlue::blink() {
  CircuitPlayground.setPixelColor(0, 0, 180, 255);
  CircuitPlayground.setPixelColor(1, 0, 0, 255);
  CircuitPlayground.setPixelColor(2, 0, 180, 255);
  CircuitPlayground.setPixelColor(3, 0, 0, 255);
  CircuitPlayground.setPixelColor(4, 0, 180, 255);
  delay(1000);
  CircuitPlayground.clearPixels();
  CircuitPlayground.setPixelColor(5, 0, 0, 255);
  CircuitPlayground.setPixelColor(6, 0, 180, 255);
  CircuitPlayground.setPixelColor(7, 0, 0, 255);
  CircuitPlayground.setPixelColor(8, 0, 180, 255);
  CircuitPlayground.setPixelColor(9, 0, 0, 255);
  delay(1000);
  CircuitPlayground.clearPixels();
}  
    
