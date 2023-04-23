#include <iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle() {
    manufacturer = "";
    year_built = 0;
}

Vehicle::Vehicle(string m, int y) {
    manufacturer = m;
    year_built = y;
}

string Vehicle::getMan() {
    return manufacturer;
}

int Vehicle::getYear() {
    return year_built;
}

void Vehicle::setMan(string m) {
    manufacturer = m;
}

void Vehicle::setYear(int y) {
    year_built = y;
}

void Vehicle::displayInfo() {
    cout << "Vehicle Information:" << endl;
    cout << "Manufacturer: " << getMan() << endl;
    cout << "Year Built: " << getYear() << endl;
}
