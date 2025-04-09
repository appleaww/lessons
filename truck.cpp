#include "truck.h"
#include <iostream>
using namespace std;
Truck::Truck(const string& model, int year, double mileage, double capacity):Vehicle(model, year, mileage), cargoCapacity(capacity) {}
void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Грузоподьемность " << cargoCapacity << " тонн\n";   
}
string Truck::ShowModel() const {
    Vehicle::ShowModel();
    return model;
}