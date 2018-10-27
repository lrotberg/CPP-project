#include <iostream>
#include "Worker.h"

Worker::Worker(string firstName, string lastName, string phone, string workerNumber, Profession p)
	:Person(firstName, lastName, phone)
{

}

Worker::~Worker() {

}

//gets
string Worker::getWorkerNumber() const {
	return this->workerNumber;
}

set<Profession> Worker::GetProfessions() const {
	return this->workerProffesion;
}

void Worker::setWorkerNumber(string workerNumber) {
	this->workerNumber = workerNumber;
}

void Worker::addProfession(Profession p) {
	if ((this->GetProfessions).empty()) {
		this->workerProffesion.push_back(p);
	}
}