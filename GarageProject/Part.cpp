#include <iostream>
#include "Part.h"

Part::Part(char *name, char *manufacturer, int year, Profession profession) {

}

Part::~Part() {

}

//gets
char* Part::getName() const {
	return NULL;
}

char* Part::getManufacturer() const {
	return NULL;
}

int Part::getYear() const {
	return NULL;
}

Profession Part::getProfession() const {
	return Electronic;//Todo: change it
}

//sets
bool Part::setName(char* name) {
	return false;
}

bool Part::setManufacturer(char *manufacturer) {
	return false;
}

bool Part::setYear(int year) {
	return false;
}

bool Part::setProfession(Profession profession) {
	return false;
}