#include <iostream>
#include "Person.h"

Person::Person() {

}


Person::Person(string firstName, string lastName, string phone) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->phone = phone;
}

Person::~Person() {}

string Person::getFirstName() const {
	return this->firstName;
}

string Person::getLastName() const {
	return this->lastName;
}

string Person::getPhone() const {
	return this->phone;
}

//sets
void Person::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Person::setLastName(string lastName) {
	this->lastName = lastName;
}

void Person::setPhone(string phone) {
	this->phone = phone;
}