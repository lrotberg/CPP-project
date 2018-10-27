#pragma once
#include <string>
using namespace std;

class Person
{
protected:
	string firstName;
	string lastName;
	string phone;

	Person();
	Person(string firstName, string lastName, string phone);
	virtual ~Person();

public:
	//gets
	string getFirstName() const;
	string getLastName() const;
	string getPhone() const;
	//sets
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setPhone(string phone);
};