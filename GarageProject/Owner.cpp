#include <iostream>
#include "Owner.h"


Owner::Owner() {

}


Owner::Owner(char *firstName, char *lastName, char *phone, char *licenseNumber, char *creditCard)
	:Person(firstName, lastName, phone) {

}

Owner::~Owner() {

}

//gets
char* Owner::gerLicenseNumber() const {
	return NULL;
}

char* Owner::gerCreditCard() const {
	return NULL;
}

//sets
bool Owner::setLicenseNumber(char *licenseNumber) {
	return false;
}

bool Owner::setCreditCard(char *creditCard) {
	return false;
}

int Owner::creditCardBilling() {
	return NULL;
}
