#pragma once
#include <iostream>
#include <string>
class Car
{
public:

	Car();
	Car(std::string newMake, std::string newModel, int newDoors, float newMileage, float newMpg, float newPetrol);
	~Car();

	void Print();
	void Drive(float driveDistance);

	std::string make;
	std::string model;
	int doors;
	float mileage;
	float mpg;
	float petrol;
};