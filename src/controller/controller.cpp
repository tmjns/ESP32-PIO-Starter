#include "controller.h"

Controller::Controller(){}

void Controller::init() {
    Serial.println("Controller Init");
    module.init();
}

void Controller::update() {
    module.update();
}
