#include <iostream>
#include "OilPump.h"

OilPump::OilPump(char *name, char *manufacturer, int year, float volume)
	:Part(name, manufacturer, year, profession) {

}

OilPump::~OilPump() {

}

float OilPump::getVolume() const {
	return NULL;
}

bool OilPump::setVolume(float volume) {
	return false;
}

float OilPump::CalculatePriceForRepair() {
	return NULL;

}