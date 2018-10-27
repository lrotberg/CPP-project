#pragma once
#include <iostream>
#include "Part.h"
#include "Malfunction.h"
#include "Wheel.h"
#include "Veichle.h"

using namespace std;

class Motorcycle : public Veichle
{
private:
	int numberOfWheels = 2;

public:
	Motorcycle(int id, char* manufacturer, float milage);
	~Motorcycle();


	virtual Wheel* operator[](int WheelNumber);
	virtual bool addWheel(Wheel* wheel);
	virtual void ShowAllWheels() const;

	int getNumberOfWheels() const;
	bool setNumberOfWheels(int numberOfWheels);

	friend ostream & operator<<(ostream & os, Motorcycle* other);
};