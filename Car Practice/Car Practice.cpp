// Car Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Car.h"

void printCar(Car toPrint)
{
    std::cout << toPrint.make << " " << toPrint.model << " is a " 
        << toPrint.doors << " door car.\nIt has "
        << toPrint.mpg << " miles per gallon and a tank size of " 
        << toPrint.petrol << " litres.\nThe current mileage on the car is "
        << toPrint.mileage << ".\n\n";
}

int main()
{
    Car car1;
    Car car2;
    Car car3;

    car1.make = "Vauxhall";
    car1.model = "Corsa";
    car1.doors = 4;
    car1.mileage = 42.0f;
    car1.mpg = 50.0f;
    car1.petrol = 40.0f;

    car2.make = "Ford";
    car2.model = "Fiesta";
    car2.doors = 4;
    car2.mileage = 253.0f;
    car2.mpg = 54.0f;
    car2.petrol = 42.0f;

    car3.make = "Toyota";
    car3.model = "Corolla";
    car3.doors = 2;
    car3.mileage = 136.0f;
    car3.mpg = 63.0f;
    car3.petrol = 43.0f;

    printCar(car1);
    printCar(car2);
    printCar(car3);

}