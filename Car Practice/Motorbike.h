#pragma once
#include <string>
#include "Vehicle.h"

class Motorbike : public Vehicle
{
public:
	Motorbike();
	Motorbike(std::string newMake, std::string newModel, int newDoors, int newWheels, float newMileage, float newMpg, float newPetrol, int newSerial);
	~Motorbike();
};

