#pragma once

#include "Person.h"

class Owner : public Person
{
protected:
	char *licenseNumber;
	char *creditCard;

public:
	Owner();
	Owner(char *firstName, char *lastName, char *phone, char *licenseNumber, char *creditCard);
	~Owner();

	//gets
	char *gerLicenseNumber() const;
	char *gerCreditCard() const;
	//sets
	bool setLicenseNumber(char *licenseNumber);
	bool setCreditCard(char *creditCard);

	int creditCardBilling();
};