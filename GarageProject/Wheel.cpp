#include <iostream>
#include "Wheel.h"

Wheel::Wheel(char *name, char *manufacturer, int year, Profession profession, float milage, float airPressure)
	:Part(name, manufacturer, year, profession) {

}

Wheel::~Wheel() {

}

//gets
float Wheel::getMilage() const {
	return NULL;
}

float Wheel::getAirPressure() const {
	return NULL;
}

//sets
bool Wheel::setMilage(float milage) {
	return false;
}

bool Wheel::setAirPressure(float milage) {
	return false;
}

float Wheel::CalculatePriceForRepair() {
	return false;
}