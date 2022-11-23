#pragma once
#include <string>
#include "Vehicle.h"

class Car : public Vehicle
{
public:
	Car();
	Car(std::string newMake, std::string newModel, int newDoors, int newWheels, float newMileage, float newMpg, float newPetrol, int newSerial);
	~Car();
};