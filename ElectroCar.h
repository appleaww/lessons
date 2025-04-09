#ifndef ELECTROCAR_H
#define ELECTROCAR_H
#include "car.h"
using namespace std;

class ElectroCar:public Car {
    double batterycapacity;
public:
    ElectroCar(const string& model, int year, double mileage,int seats, double battery);
    void displayInfo() const override;
    string ShowModel() const override;
};
#endif