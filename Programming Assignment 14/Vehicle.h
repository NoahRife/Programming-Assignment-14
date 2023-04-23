#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>

using namespace std;

class Vehicle
{
	string manufacturer;
	int year_built;

public:
	Vehicle();
	Vehicle(string m, int y);
	string getMan();
	int getYear();
	void setMan(string m);
	void setYear(int y);
	void displayInfo();
};

#endif





