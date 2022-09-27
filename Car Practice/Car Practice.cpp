// Car Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Car.h"

int main()
{
    Car car1;
    Car car2;
    Car car3;

    car1.make = "Vauxhall";
    car1.model = "Corsa";
    car1.doors = 4;
    car1.mileage = 42354.0f;
    car1.mpg = 50.0f;
    car1.petrol = 40.0f;

    car2.make = "Ford";
    car2.model = "Fiesta";
    car2.doors = 4;
    car2.mileage = 25453.0f;
    car2.mpg = 54.0f;
    car2.petrol = 42.0f;

    car3.make = "Toyota";
    car3.model = "Corolla";
    car3.doors = 2;
    car3.mileage = 1236.0f;
    car3.mpg = 63.0f;
    car3.petrol = 43.0f;

    car1.Print();
    car2.Print();
    car3.Print();

    car1.Drive(6.0f);
    car2.Drive(25.0f);
    car3.Drive(14.0f);

    car1.Print();
    car2.Print();
    car3.Print();
}