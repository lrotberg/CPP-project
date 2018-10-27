#include <iostream>
#include "Malfunction.h"

using namespace std;


Malfunction::Malfunction(int id, char* name, char* description, Part* part, char* status) {

}

Malfunction::~Malfunction() {

}

void Malfunction::setID() {
}

float Malfunction::PriceForRepair() {
	return NULL;
}

//gets
int Malfunction::getID() const {
	return NULL;
}
char* Malfunction::getName() const {
	return NULL;
}
char* Malfunction::getDescription() const {
	return NULL;
}
Part* Malfunction::getPart() const {
	return NULL;
}
char* Malfunction::getStatus() const {
	return NULL;
}

//sets
bool Malfunction::setName(char* name) {
	return false;
}
bool Malfunction::setDescription(char* description) {
	return false;
}
bool Malfunction::setPart(Part* parts) {
	return false;
}
bool Malfunction::setStatus(char* status) {
	return false;
}

ostream & operator<<(ostream & os, Malfunction other) {
	return os;
}