#pragma once

#include <string>
#include "Car.h"

class Space
{
public:

	Space();
	~Space();

	void Park(Car newCar);
	void Exit();
	void Print();

	bool hasCar;
	Car car;
};

