#pragma once
#include <iostream>
#include "Part.h"
#include "Malfunction.h"
#include "Wheel.h"
#include "Veichle.h"
using namespace std;

class Car : public Veichle
{
private:
	int numberOfWheels = 4;

public:
	Car(int id, char* manufacturer, float milage);
	~Car();

	Wheel* operator[] (int WheelNumber);
	bool addWheel(Wheel* wheel);
	void ShowAllWheels() const;

	int getNumberOfWheels() const;
	bool setNumberOfWheels(int numberOfWheels);

	friend ostream& operator<<(ostream & os, Car* other);
};