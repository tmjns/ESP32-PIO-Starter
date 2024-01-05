#include "controller/controller.h"

Controller controller;

void setup() {
  Serial.begin(115200);
  controller.init();
}

void loop() {
  controller.update();
}