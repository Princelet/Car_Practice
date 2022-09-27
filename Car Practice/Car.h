#pragma once
#include <iostream>
#include <string>
class Car
{
public:

	void Print();
	void Drive(float driveDistance);

	std::string make;
	std::string model;
	int doors;
	float mileage;
	float mpg;
	float petrol;
};