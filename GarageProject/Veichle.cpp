#include <iostream>
#include "Veichle.h"


Veichle::Veichle(int id, char* manufacturer, float milage) {

}


Veichle::~Veichle() {

}

Wheel* Veichle::operator[] (int WheelNumber) {
	return NULL;
}

Part* Veichle::operator() (int partNumber) const {
	return NULL;
}

bool Veichle::operator== (int otherId) const {
	return false;
}

bool Veichle::addPart(Part* part) {
	return false;
}

bool Veichle::addWheel(Wheel* wheel) {
	return false;
}

void Veichle::ShowAllParts() const {
}

void Veichle::ShowAllWheels() const {
}

//gets
int Veichle::getId() const {
	return NULL;
}

int Veichle::getManufacturer() const {
	return NULL;
}
float Veichle::getMilage() const {
	return NULL;
}

Owner* Veichle::getPreviousOwners() const {
	return NULL;
}

Part** Veichle::getParts() const {
	return NULL;
}

Wheel** Veichle::getWheel() const {
	return NULL;
}

//sets
bool Veichle::setId(int id) {
	return false;
}

bool Veichle::setManufacturer(char *manufacturer) {
	return false;
}

bool Veichle::setMilage(float milage) {
	return false;
}

bool Veichle::setPreviousOwners(Owner[]) {
	return false;
}

bool Veichle::setParts(Part **partArray) {
	return false;
}

bool Veichle::setWheel(Wheel **wheelArray) {
	return false;
}