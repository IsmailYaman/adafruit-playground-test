#include <Adafruit_CircuitPlayground.h>
#include "Low.h"
#include "Medium.h"
#include "High.h"
#include "ConsoleLog.h"
#include "LedBlue.h"
#include "LedPink.h"
#include "Led.h"

Low L = Low();
Medium M = Medium();
High H = High();
LedBlue Blue = LedBlue();
LedPink Pink = LedPink();

bool toggle;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  CircuitPlayground.begin();
  
  toggle = false;
  
  // interrupt, changes the toggle to pink or blue when the switch is triggered
  attachInterrupt(
    digitalPinToInterrupt(7),
    switchToggle,
    CHANGE
  );

}

void loop() {
  // put your main code here, to run repeatedly:
  if (toggle) {
    Pink.blink();
  } else {
    Blue.blink();
  }
  
}

void switchToggle() {
  toggle = CircuitPlayground.slideSwitch();
}

void consolelogging() {
  //polling, reads the state of the lightsensor and logs accordingly
  if (CircuitPlayground.lightSensor() < 300) {
    L.consolelog();
  }
  if (CircuitPlayground.lightSensor() >= 300 && CircuitPlayground.lightSensor() <= 800) {
    M.consolelog();
  }
  if (CircuitPlayground.lightSensor() > 800) {
    H.consolelog();
  }
}
