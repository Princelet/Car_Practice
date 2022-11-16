#include "Space.h"


Space::Space()
	: hasCar(false)
{

}

Space::~Space()
{
	std::cout << "\nSpace Destroyed.";
}

void Space::Park(Car newCar)
{
	car = newCar;
	hasCar = true;
	std::cout << "\nCar " << car.GetMake() << " " << car.GetModel() << " parked in the space.";
}

void Space::Exit()
{
	hasCar = false;
	std::cout << "\nCar " << car.GetMake() << " " << car.GetModel() << " exited the space.";
}

void Space::Print()
{
	if (hasCar == true)
	{
		std::cout << "\n\nThe currently parked car:\n";
		car.Print();
	}
	else
	{
		std::cout << "\nNo car is parked.\n";
	}
}