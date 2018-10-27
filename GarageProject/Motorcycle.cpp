#include<iostream>
#include "Motorcycle.h"

Motorcycle::Motorcycle(int id, char* manufacturer, float milage) : Veichle(id, manufacturer, milage) {

}

Motorcycle::~Motorcycle() {

}


Wheel* Motorcycle::operator[](int WheelNumber) {
	return NULL;
}

bool Motorcycle::addWheel(Wheel* wheel) {
	return false;
}

void Motorcycle::ShowAllWheels() const {
}

int Motorcycle::getNumberOfWheels() const {
	return NULL;
}

bool Motorcycle::setNumberOfWheels(int numberOfWheels) {
	return false;
}

ostream & operator<<(ostream & os, Motorcycle* other) {
	return os;
}