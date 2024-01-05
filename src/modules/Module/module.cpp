#include "module.h"

Module::Module(){}


void Module::init() {
  Serial.println("Module Init");
}

void Module::update(){
  Serial.println("update Module");
}