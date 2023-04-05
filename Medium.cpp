#include "Medium.h"

Medium::Medium() {
  Serial.begin(9600);
}

void Medium::consolelog() {
  Serial.println("Light intensity is medium");
}
