#include "Car.h"
#include <iostream>

Car::Car()
    : doors(4)
    , mileage(0)
    , mpg(0)
    , petrol(100)
{
    std::cout << "Car constructed!\n";
}

Car::Car(std::string newMake, std::string newModel, int newDoors, float newMileage, float newMpg, float newPetrol)
    : make(newMake)
    , model(newModel)
    , doors(newDoors)
    , mileage(newMileage)
    , mpg(newMpg)
    , petrol(newPetrol)
{
    std::cout << "\nCar constructed using params!\n";
}

Car::~Car()
{
    std::cout << "\nCar destroyed.";
}

void Car::Print()
{
    std::cout << "\n" << make << " " << model << " is a "
        << doors << " door car.\nIt has "
        << mpg << " miles per gallon and a tank of "
        << petrol << " litres.\nThe current mileage on the car is "
        << mileage << ".\n";
}

void Car::Drive(float driveDistance)
{
    std::cout << "\n" << make << " " << model << " is driving " << driveDistance << " miles.\n";
    mileage += driveDistance;
    float fuelUsed = driveDistance / mpg;
    petrol -= fuelUsed;
    std::cout << "WOO\n";
}