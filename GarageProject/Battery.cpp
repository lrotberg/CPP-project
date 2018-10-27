#include <iostream>
#include "Battery.h"

Battery::Battery(char *name, char *manufacturer, int year, Profession profession, float milage)
	:Part(name, manufacturer, year, profession) {

}

Battery::~Battery() {

}

float Battery::getMilage() const {
	return NULL;
}

bool Battery::setMilage(float milage){
	return NULL;
}

float Battery::CalculatePriceForRepair() {
	return NULL;
}
