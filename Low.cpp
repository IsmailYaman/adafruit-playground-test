#include "Low.h"

Low::Low() {
  Serial.begin(9600);
}

void Low::consolelog() {
  Serial.println("Light intensity is low");
};
