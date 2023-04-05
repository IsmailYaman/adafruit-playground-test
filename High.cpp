#include "High.h"

High::High() {
  Serial.begin(9600);
}

void High::consolelog() {
  Serial.println("Light intensity is high");
};
