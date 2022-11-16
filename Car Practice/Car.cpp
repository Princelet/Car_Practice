#include "Car.h"
#include <iostream>

Car::Car()
    : doors(4)
    , mileage(0)
    , mpg(0)
    , petrol(100)
    , tank(100)
    , serial(0)
    , parked(false)
{
    std::cout << "Car constructed!\n";
}

Car::Car(std::string newMake, std::string newModel, int newDoors, float newMileage, float newMpg, float newPetrol, int newSerial)
    : make(newMake)
    , model(newModel)
    , doors(newDoors)
    , mileage(newMileage)
    , mpg(newMpg)
    , petrol(newPetrol)
    , tank(newPetrol)
    , serial(newSerial)
    , parked(false)
{
    std::cout << "\nCar constructed using params!\n";
}

Car::~Car()
{
    std::cout << "\nCar destroyed.";
}

void Car::Print()
{
    std::cout << "\n" << make << " " << model << " is a " << doors << " door car." << std::endl;
    std::cout << "It runs at " << mpg << " miles per gallon with a tank of " << tank << " litres." << std::endl;
    std::cout << "The car has " << petrol << " litres of petrol currently in its tank." << std::endl;
    std::cout << "The current mileage on the car is " << mileage << std::endl;
}

void Car::Drive(float driveDistance)
{
    std::cout << "\n" << make << " " << model << " is driving " << driveDistance << " miles.\n";
    mileage += driveDistance;
    float fuelUsed = driveDistance / mpg;
    petrol -= fuelUsed;
    std::cout << "WOO\n";
}


float Car::GetPetrol()
{
    return petrol;
}

void Car::SetPetrol(float newPetrol)
{
    petrol = newPetrol;
}

void Car::FillPetrol(float newPetrol)
{
    petrol += newPetrol;

    if (petrol > tank)
    {
        petrol = tank;
        std::cout << "Tank has been filled to max." << std::endl;
    }
    if (petrol <= 0)
    {
        petrol = 0;
        std::cout << "Tank has been emptied." << std::endl;
    }
}


std::string Car::GetMake()
{
    return make;
}

std::string Car::GetModel()
{
    return model;
}