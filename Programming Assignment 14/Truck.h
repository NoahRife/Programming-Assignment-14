#ifndef TRUCK_H_
#define TRUCK_H_

#include <iostream>
#include "Vehicle.h"

class Truck : public Vehicle
{
	int tow_cap;

public:
	Truck();
	Truck(string m, int y, int t);
	int getTowCap();
	void setTowCap(int t);
	void displayInfo();
};

#endif