#include <iostream>
#include "ElectricEngine.h"

ElectricEngine::ElectricEngine(char *name, char *manufacturer, int year, Profession profession, float milage, int horsePower, float power)
	:Engine(name, manufacturer, year, profession, milage, horsePower) {

}

ElectricEngine::~ElectricEngine() {

}

float ElectricEngine::getPower() const {
	return NULL;
}

bool ElectricEngine::setPower(float volume) {
	return NULL;
}

float ElectricEngine::CalculatePriceForRepair() {
	return false;
}