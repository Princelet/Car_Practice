#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle()
    : doors(6)
    , wheels(3)
    , mileage(0)
    , mpg(0)
    , petrol(100)
    , tank(100)
    , serial(0)
    , parked(false)
{
    std::cout << "Vehicle constructed!\n";
}

Vehicle::Vehicle(std::string newMake, std::string newModel, int newDoors, int newWheels, float newMileage, float newMpg, float newPetrol, int newSerial, std::string newType)
    : make(newMake)
    , model(newModel)
    , doors(newDoors)
    , wheels(newWheels)
    , mileage(newMileage)
    , mpg(newMpg)
    , petrol(newPetrol)
    , tank(newPetrol)
    , serial(newSerial)
    , parked(false)
    , vehicleType(newType)
{
    std::cout << "Vehicle constructed using params!\n";
}

Vehicle::~Vehicle()
{
    std::cout << "Vehicle destroyed.\n";
}

void Vehicle::Print()
{
    std::cout << "\n" << make << " " << model << " is a " << doors << " door " << vehicleType << "." << std::endl;
    std::cout << "It runs at " << mpg << " miles per gallon with a tank of " << tank << " litres." << std::endl;
    std::cout << "The " << vehicleType << " has " << petrol << " litres of petrol currently in its tank." << std::endl;
    std::cout << "The current mileage on the " << vehicleType << " is " << mileage << "." << std::endl;
}

void Vehicle::Drive(float driveDistance)
{
    std::cout << "\n" << make << " " << model << " is driving " << driveDistance << " miles.\n";
    mileage += driveDistance;
    float fuelUsed = driveDistance / mpg;
    petrol -= fuelUsed;
    std::cout << "WOO\n";
}


float Vehicle::GetPetrol()
{
    return petrol;
}

void Vehicle::SetPetrol(float newPetrol)
{
    petrol = newPetrol;
}

void Vehicle::FillPetrol(float newPetrol)
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


std::string Vehicle::GetMake()
{
    return make;
}

std::string Vehicle::GetModel()
{
    return model;
}