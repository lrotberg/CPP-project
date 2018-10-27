#pragma once
#include <iostream>
#include "Part.h"
using namespace std;

class Malfunction
{
private:
	void setID();


protected:
	int Id;
	static int ID;
	char* name;
	char* description;
	Part* part;
	char* status;

public:
	Malfunction(int id, char* name, char* description, Part* part, char* status);
	~Malfunction();

	float PriceForRepair();

	//gets
	int getID() const;
	char* getName() const;
	char* getDescription() const;
	Part* getPart() const;
	char* getStatus() const;

	//sets
	bool setName(char* name);
	bool setDescription(char* description);
	bool setPart(Part* parts);
	bool setStatus(char* status);

	friend ostream & operator<<(ostream & os, Malfunction other);
};