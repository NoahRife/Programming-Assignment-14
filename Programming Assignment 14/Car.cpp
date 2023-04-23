#include <iostream>
#include "Vehicle.h"
#include "Car.h"
using namespace std;

Car::Car() : Vehicle()
{
	num_doors = 0;
}

Car::Car(string m, int y, int n) : Vehicle(m, y)
{
	num_doors = n;
}

int Car::getDoors()
{
	return num_doors;
}

void Car::setDoors(int n)
{
	num_doors = n;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << getDoors() << endl;
}






