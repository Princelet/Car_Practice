#include "Car.h"
#include <iostream>

Car::Car()
{
    std::cout << "Car constructed!\n";
}

Car::Car(std::string newMake, std::string newModel, int newDoors, int newWheels, float newMileage, float newMpg, float newPetrol, int newSerial)
    : Vehicle(newMake, newModel, newDoors, newWheels, newMileage, newMpg, newPetrol, newSerial, "car")
{
    std::cout << "Car " << make << " " << model << " constructed using params!\n";
}


Car::~Car()
{
    std::cout << "Car " << make << " " << model << " destroyed.\n";
}
