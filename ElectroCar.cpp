#include "ElectroCar.h"
#include <iostream>
using namespace std;
ElectroCar::ElectroCar(const string& model, int year, double mileage,int seats, double battery):Car(model, year, mileage, seats, "ЭЛЕКТРИЧЕСТВО"), batterycapacity(battery) {}

void ElectroCar::displayInfo() const {
    Car::displayInfo();
    cout << "Ёмкость батареи: " << batterycapacity << " кВч\n";
}
string ElectroCar::ShowModel() const {
    Vehicle::ShowModel();
    return model;
}