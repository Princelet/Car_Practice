#include "Car.h"
#include <iostream>

void Car::Print()
{
    std::cout << make << " " << model << " is a "
        << doors << " door car.\nIt has "
        << mpg << " miles per gallon and a tank of "
        << petrol << " litres.\nThe current mileage on the car is "
        << mileage << ".\n\n";
}

void Car::Drive(float driveDistance)
{
    std::cout << make << " " << model << " is driving " << driveDistance << " miles.\n";
    mileage += driveDistance;
    float fuelUsed = driveDistance / mpg;
    petrol -= fuelUsed;
    std::cout << "WOO\n\n";
}