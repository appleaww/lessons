#include "bus.h"
#include <iostream>
using namespace std;
Bus::Bus(const string& model, int year, double mileage, int capacity):Vehicle(model, year, mileage), passengerCapacity(capacity) {}
void Bus::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Вместимость пассажиров: " << passengerCapacity << "\n";
}
string Bus::ShowModel() const {
    Vehicle::ShowModel();
    return model;
}