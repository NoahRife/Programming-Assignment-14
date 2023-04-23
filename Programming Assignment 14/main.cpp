//Noah Rife
// CIS 1202 501
//April 23rd, 2023

#include <iostream>
#include<string>

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() //start main
{
	string man;

	
	int year, doors, towing; //store years number of doors and towing capacity

	cout << "Vehicle Program:\n";
	cout << "\nVehicle: \n";
	cout << "Enter the manufacturer: ";
	getline(cin, man);
	cout << "Enter the year built: ";
	cin >> year;

	Vehicle v(man, year);
	v.displayInfo();

	cout << "\nCar: \n";

	
	cin.clear();
	cin.ignore(10, '\n');

	cout << "Enter the manufacturer: ";
	getline(cin, man);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;

	Car c(man, year, doors);
	c.displayInfo();

	cout << endl << "Truck: " << endl;
	cin.clear();
	cin.ignore(10, '\n');
	cout << "Enter the manufacturer: ";
	getline(cin, man);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the towing capacity: ";
	cin >> towing;
	Truck t(man, year, towing);
	t.displayInfo();

	return 0;
}