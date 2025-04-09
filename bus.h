#ifndef BUS_H
#define BUS_H
#include "vehicle.h"
using namespace std;
class Bus : public Vehicle {
    int passengerCapacity;
public:
    Bus(const string& model, int year, double mileage, int capacity);
    void displayInfo() const override;
    string ShowModel() const override;
};
#endif