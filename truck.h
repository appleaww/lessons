#ifndef TRUCK_H
#define TRUCK_H
#include "vehicle.h"
using namespace std;
class Truck:public Vehicle {
    double cargoCapacity;
public:
    Truck(const string& model, int year, double mileage, double capacity);
    void displayInfo() const override;
    string ShowModel() const override;
};
#endif