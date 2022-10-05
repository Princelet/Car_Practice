// Car Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Car.h"
#include "Space.h"

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
    car1.serial = 1111;

    car2.make = "Ford";
    car2.model = "Fiesta";
    car2.doors = 4;
    car2.mileage = 25453.0f;
    car2.mpg = 54.0f;
    car2.petrol = 42.0f;
    car2.serial = 2222;

    car3.make = "Toyota";
    car3.model = "Corolla";
    car3.doors = 2;
    car3.mileage = 1236.0f;
    car3.mpg = 63.0f;
    car3.petrol = 43.0f;
    car3.serial = 3333;


    // Add cars to vector
    std::vector<Car> carVector;
    carVector.push_back(car1);
    carVector.push_back(car2);
    carVector.push_back(car3);

    // Print all car copies in vector
    for (int i = 0; i < carVector.size(); ++i)
    {
        carVector[i].Print();
    }

    // Drive cars in vector to increase mileage and decrease fuel
    car1.Drive(6.0f);
    car2.Drive(25.0f);
    car3.Drive(14.0f);

    car1.Print();
    car2.Print();
    car3.Print();


    Car car4("Mario", "Kart", 4, 18342, 64, 50, 8008);
    car4.Print();
    // Car 4 has no information until it is given some by this constructor




    // Map of cars, doesnt work but no error?
    std::map<int, Car> carMap;
    carMap[car1.serial] = car1;
    carMap[car2.serial] = car2;
    carMap[car3.serial] = car3;
    carMap[car4.serial] = car4;

    std::cout << "\nEnter a 4 digit car serial number for information on the car.\n\n";
    int userResponse = 0;
    std::cin >> userResponse;

    if (carMap.find(userResponse) != carMap.end())
    {
        carMap[userResponse].Print();
    }


    // Cars can park in spaces
    Space space1;
    Space space2;
    Space space3;
    Space space4;


    std::vector<Space> spaceVector;
    spaceVector.push_back(space1);
    spaceVector.push_back(space2);
    spaceVector.push_back(space3);
    spaceVector.push_back(space4);


    spaceVector[0].Park(car1);
    spaceVector[0].Print();
    spaceVector[0].Exit();
    spaceVector[0].Print();

    spaceVector[1].Park(car2);
    spaceVector[1].Print();
    spaceVector[1].Exit();
    spaceVector[1].Print();

}