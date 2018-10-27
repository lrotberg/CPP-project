#pragma once
#include "Wheel.h"
#include "Part.h"
#include "Owner.h"

#define MAX_OWNERS 20

class Veichle
{
protected:
	int id;
	char* manufacturer;
	float milage;
	Owner PreviousOwners[MAX_OWNERS];
	Part** parts; //dynamic array of Pointer to part
	Wheel** wheel;//dynamic array of Pointer to wheel
	Veichle(int id, char* manufacturer, float milage);

public:

	virtual ~Veichle();

	virtual Wheel* operator[] (int WheelNumber) = 0;
	virtual Part* operator() (int partNumber) const;
	virtual bool operator== (int otherId) const;
	virtual bool addPart(Part* part);
	virtual bool addWheel(Wheel* wheel) = 0;
	virtual void ShowAllParts() const;
	virtual void ShowAllWheels() const;

	//gets
	int getId() const;
	int getManufacturer() const;
	float getMilage() const;
	Owner* getPreviousOwners() const;
	Part** getParts() const;
	Wheel** getWheel() const;

	//sets
	bool setId(int id);
	bool setManufacturer(char *manufacturer);
	bool setMilage(float milage);
	bool setPreviousOwners(Owner[]);
	bool setParts(Part **partArray);
	bool setWheel(Wheel **wheelArray);
};