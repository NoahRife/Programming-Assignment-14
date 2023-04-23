#include "Vehicle.h"
#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck() : Vehicle()
{
	tow_cap = 0;
}

Truck::Truck(string m, int y, int t) : Vehicle(m, y)
{
	tow_cap = t;
}

int Truck::getTowCap()
{
	return tow_cap;
}

void Truck::setTowCap(int t)
{
	tow_cap = t;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTowCap() << endl;
}