#pragma once
#include <string>
#include "Vehicle.h"

class Truck : public Vehicle
{
public:
	Truck();
	Truck(std::string newMake, std::string newModel, int newDoors, int newWheels, float newMileage, float newMpg, float newPetrol, int newSerial, std::string bedContents);
	~Truck();

	// Public Functions
	void Print();

private:
	std::string bedContents;
};

