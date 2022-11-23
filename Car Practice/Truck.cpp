#include "Truck.h"
#include <iostream>

Truck::Truck()
	: bedContents("Nothing")
{
	std::cout << "Truck constructed!\n";
}

Truck::Truck(std::string newMake, std::string newModel, int newDoors, int newWheels, float newMileage, float newMpg, float newPetrol, int newSerial, std::string newContents)
	: Vehicle(newMake, newModel, newDoors, newWheels, newMileage, newMpg, newPetrol, newSerial, "truck")
	, bedContents(newContents)
{
	std::cout << "Truck " << make << " " << model << " constructed using params!\n";
}

Truck::~Truck()
{
	std::cout << "Truck " << make << " " << model << " destructed!\n";
}

void Truck::Print()
{
	Vehicle::Print();
	std::cout << "The truck bed contains " << bedContents << "." << std::endl;
}
