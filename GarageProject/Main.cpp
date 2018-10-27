#include <iostream>
using namespace std;
#include "Battery.h"
#include "Car.h"
#include "VeichleProblems.h"
#include "Coden.h"
#include "ElectricEngine.h"
#include "Engine.h"
#include "GasolineEngine.h"
#include "Malfunction.h"
#include "OilPump.h"
#include "Owner.h"
#include "Part.h"
#include "Person.h"
#include "Profession.h"
#include "Veichle.h"
#include "Wheel.h"
#include "Worker.h"
#include "Motorcycle.h"

Car* createDadiCar()
{
	Car *dadiCar = new Car(56598985, "Mercedes", 100522);

	Wheel *whl1 = new Wheel("Wheel1", "Toyo", 2005, Mechanic, 5658, 32);
	dadiCar->addWheel(whl1);
	Wheel *whl2 = new Wheel("Wheel2", "Toyo", 2005, Mechanic, 5658, 32);
	dadiCar->addWheel(whl2);
	Wheel *whl3 = new Wheel("Wheel3", "Toyo", 2005, Mechanic, 1200, 32);
	dadiCar->addWheel(whl3);
	Wheel *whl4 = new Wheel("Wheel4", "Toyo", 2005, Mechanic, 1200, 32);
	dadiCar->addWheel(whl4);

	Coden *c1 = new Coden("CC1A", "Bor", 1991, Electronic, "22569");
	dadiCar->addPart(c1);
	Battery *b1 = new Battery("RR1", "Dor", 1991, Electronic, 6625);
	dadiCar->addPart(b1);
	OilPump *o1 = new OilPump("Oil221", "Toyota", 1996, 566);
	dadiCar->addPart(o1);
	GasolineEngine *g1 = new GasolineEngine("Gas99", "Bor", 1996, Mechanic, 565, 500, 300);
	dadiCar->addPart(g1);
	return dadiCar;
}


Motorcycle* createYosiMotorcycle()
{
	Motorcycle *yosiMtc = new Motorcycle(99598985, "BMW", 6330);
	Wheel *whl1 = new Wheel("Wheel1", "royo", 2006, Mechanic, 600, 29);
	yosiMtc->addWheel(whl1);
	Wheel *whl2 = new Wheel("Wheel2", "royo", 2006, Mechanic, 600, 29);
	yosiMtc->addWheel(whl2);

	Coden *c1 = new Coden("CC1A", "Bor", 2000, Electronic, "22569");
	yosiMtc->addPart(c1);
	Battery *b1 = new Battery("Rp1", "Dor", 2006, Electronic, 6625);
	yosiMtc->addPart(b1);
	OilPump *o1 = new OilPump("Oil221", "Toyota", 2000, 566);
	yosiMtc->addPart(o1);
	ElectricEngine *e1 = new ElectricEngine("Elco32", "BMW", 2000, Electronic, 2652, 300, 500);
	yosiMtc->addPart(e1);

	return yosiMtc;
}

void printeProblemsArraySortByDate(VeichleProblems **problemsArray)
{
	//Complete code here
}

void printeProblemsArraySortByVeichleType(VeichleProblems **problemsArray)
{
	//Complete code here
}

VeichleProblems** operator+(VeichleProblems** arry, VeichleProblems newProblem)
{
	//Complete code here
	return arry;
}

VeichleProblems** operator-(VeichleProblems** arry, VeichleProblems newProblem)
{
	//Complete code here
	return arry;
}

int main()
{

	Worker *aviWkr = new Worker("Avi", "Horsh", "054889652", "22", Electronic);
	Worker *boniWkr = new Worker("Boni", "Ben basat", "0544454562", "23", Mechanic);

	Owner *dadiOwn = new Owner("Dadi", "Visman", "05698965870", "332659", "FL698547");
	Owner *yosiOwn = new Owner("Yosi", "zisman", "05324365845", "221548", "g4698ft6");

	Veichle *VeichleArry[2];
	VeichleArry[0] = createDadiCar();
	cout << "Dadi Car Parts are: \n";
	(*VeichleArry[0]).ShowAllParts();
	VeichleArry[1] = createYosiMotorcycle();
	cout << "Yosi Motorcycle firrst Wheel is: \n" << (*VeichleArry[1])[0] << "\n";

	Malfunction malfunctionCar1(1, "CodenError", "Coden not working", (*VeichleArry[0])(0), "Open");
	Malfunction malfunctionCar2(2, "Battary", "Battary not working", (*VeichleArry[0])(1), "Open");

	VeichleProblems **problemsArray = NULL;
	VeichleProblems p1(*dadiOwn, *VeichleArry[0], "25/8/18");
	problemsArray = problemsArray + p1;
	*problemsArray[0] << malfunctionCar1;
	*problemsArray[0] << malfunctionCar2;
	(*problemsArray[0]).ShowVeichleProblems();

	Malfunction malfunctionMoto1(3, "OilPumpFail", "OilPump not working", (*VeichleArry[0])(2), "Open");

	VeichleProblems p2(*yosiOwn, *VeichleArry[1], "27/8/18");
	problemsArray = problemsArray + p2;
	*problemsArray[1] << malfunctionMoto1;
	(*problemsArray[1]).ShowVeichleProblems();

	if ((*problemsArray[0]).CanCloseCase() == false)
	{
		cout << "The malfunction are: \n";
		(*problemsArray[0]).ShowAllMalfunction();
		cout << "The price for repair this car is: \n" << (*problemsArray[0]).PriceForRepair() << "\n";

		//To show that the price went down
		malfunctionCar1.setStatus("Close");
		cout << "The price for repair this car is now: \n" << (*problemsArray[0]).PriceForRepair() << "\n";

		//To show that after all the problems were fix it can be close.
		malfunctionCar2.setStatus("Close");
		if ((*problemsArray[0]).CanCloseCase())
		{
			problemsArray = problemsArray - *problemsArray[0];
		}
	}

	cout << "How can fix the pumpOil? \n " << malfunctionMoto1.getPart()->getProfession() << "\n";
	cout << "Boni Professions are: \n" << (*boniWkr).GetProfessions() << "\n";

	if ((*VeichleArry[0]) == 56598985)
		cout << "The manfucture of the car is:" << (*VeichleArry[0]).getManufacturer() << "\n";

	printeProblemsArraySortByDate(problemsArray);
	printeProblemsArraySortByVeichleType(problemsArray);

	delete aviWkr;
	delete boniWkr;
	delete dadiOwn;
	delete yosiOwn;
	delete VeichleArry[0];
	delete VeichleArry[1];
	delete problemsArray;
	return 0;
}