#include<iostream>
#include "Car.h"


Car::Car(int id, char* manufacturer, float milage) : Veichle(id, manufacturer, milage) {

}

Car::~Car() {

}

Wheel* Car::operator[] (int WheelNumber) {
	return NULL;
}

bool Car::addWheel(Wheel* wheel) {
	return false;
}

void Car::ShowAllWheels() const {

}

int Car::getNumberOfWheels() const {
	return NULL;
}

bool Car::setNumberOfWheels(int numberOfWheels) {
	return false;
}

ostream& operator<<(ostream & os, Car* other) {
	return os;
}