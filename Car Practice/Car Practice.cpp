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
    Car car1("Vauxhall", "Corsa,", 4, 42354.0f, 50.0f, 40.0f, 1111);
    Car car2("Ford", "Fiesta", 4, 25453.0f, 54.0f, 42.0f, 2222);
    Car car3("Toyota", "Corolla", 2, 12365.0f, 63.0f, 43.0f, 3333);

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


    // Map of Cars
    /*

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
    */


    // Getters and Setters

    std::cout << "\n\nCar1 has " << car1.GetPetrol() << " gallons of petrol." << std::endl;

    car1.SetPetrol(30.0f);
    std::cout << "Car1 now has " << car1.GetPetrol() << " gallons of petrol." << std::endl;

    car1.FillPetrol(5.0f);
    std::cout << "Car1 now has " << car1.GetPetrol() << " gallons of petrol after being filled." << std::endl;

    car1.FillPetrol(100.0f);
    std::cout << "Car1 now has " << car1.GetPetrol() << " gallons of petrol after being filled way above the maximum." << std::endl;

}