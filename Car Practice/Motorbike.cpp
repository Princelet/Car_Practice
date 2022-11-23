#include "Motorbike.h"
#include <iostream>

Motorbike::Motorbike()
{
	std::cout << "Motorbike constructed!\n";
}

Motorbike::Motorbike(std::string newMake, std::string newModel, int newDoors, int newWheels, float newMileage, float newMpg, float newPetrol, int newSerial)
	: Vehicle(newMake, newModel, newDoors, newWheels, newMileage, newMpg, newPetrol, newSerial, "motorbike")
{
	std::cout << "Motorbike " << make << " " << model << " constructed using params!\n";
}

Motorbike::~Motorbike()
{
	std::cout << "Motorbike " << make << " " << model << " destructed!\n";
}
