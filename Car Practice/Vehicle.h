#pragma once
#include <string>

class Vehicle
{
public:

	Vehicle();
	Vehicle(std::string newMake, std::string newModel, int newDoors, int newWheels, float newMileage, float newMpg, float newPetrol, int newSerial, std::string newType);
	~Vehicle();

	void Print();
	void Drive(float driveDistance);

	float GetPetrol();
	void SetPetrol(float newPetrol);
	void FillPetrol(float newPetrol);

	std::string GetMake();
	std::string GetModel();

protected:
	std::string make;
	std::string model;
	int doors;
	int wheels;
	float mileage;
	float mpg;
	float petrol;
	float tank;
	int serial;
	bool parked;
	std::string vehicleType;
};

