#include <iostream>
#include "VeichleProblems.h"

VeichleProblems::VeichleProblems() {

}

VeichleProblems::VeichleProblems(const VeichleProblems & VeichleProblem) {

}

VeichleProblems::VeichleProblems(Owner owner, Veichle& veichle, char* entryDate) {

}

VeichleProblems::~VeichleProblems() {

}

bool VeichleProblems::setId(int id) {
	return false;
}

VeichleProblems VeichleProblems::operator<<(Malfunction& malfunction) //Add malfunction
{
	return *this;
}

void VeichleProblems::ShowAllMalfunction() const {
}

void VeichleProblems::ShowVeichleProblems() const{
}

bool VeichleProblems::CanCloseCase() const {
	return false;
}

float VeichleProblems::PriceForRepair() const {
	return NULL;
}

char* VeichleProblems::toString() const { // for print{
	return NULL;
}

//gets
int VeichleProblems::getId() const {
	return NULL;
}

Malfunction** VeichleProblems::getMalfunction() const {
	return NULL;
}

char* VeichleProblems::getEntryDate() const {
	return NULL;
}

Veichle* VeichleProblems::getVeichle() const {
	return NULL;
}

Owner* VeichleProblems::getOwner() const {
	return NULL;
}

//sets
bool VeichleProblems::setMalfunction(Malfunction* malfunction) {
	return false;
}

bool VeichleProblems::setEntryDate(char* entryDate) {
	return false;
}

bool VeichleProblems::setVeichle(Veichle* veichle) {
	return false;
}

bool VeichleProblems::setOwner(Owner owner) {
	return false;
}