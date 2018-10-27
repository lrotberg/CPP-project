#include <iostream>
#include "GasolineEngine.h"

GasolineEngine::GasolineEngine(char *name, char *manufacturer, int year, Profession profession, float milage, int horsePower, float volume)
	:Engine(name, manufacturer, year, profession, milage, horsePower) {

}

GasolineEngine::~GasolineEngine() {

}

float GasolineEngine::getVolume() const {
	return NULL;
}

bool GasolineEngine::setVolume(float volume) {
	return false;
}

float GasolineEngine::CalculatePriceForRepair() {
	return false;
}