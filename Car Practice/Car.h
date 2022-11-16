#pragma once
#include <iostream>
#include <string>
class Car
{
public:

	Car();
	Car(std::string newMake, std::string newModel, int newDoors, float newMileage, float newMpg, float newPetrol, int newSerial);
	~Car();

	void Print();
	void Drive(float driveDistance);

	float GetPetrol();
	void SetPetrol(float newPetrol);
	void FillPetrol(float newPetrol);

	std::string GetMake();
	std::string GetModel();

private:
	std::string make;
	std::string model;
	int doors;
	float mileage;
	float mpg;
	float petrol;
	float tank;
	int serial;
	bool parked;
};