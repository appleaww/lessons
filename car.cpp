#include "car.h"
#include "vehicle.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car(const string& model, int year, double mileage,int seats, const string& fueltype):Vehicle(model, year, mileage), seats(seats), fueltype(fueltype) {}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Количество мест: " << seats << "\nТопливо: " << fueltype << "\n";
}
string Car::ShowModel() const {
    Vehicle::ShowModel();
    return model;
}
Car::Car() : Vehicle("", 0, 0), seats(0), fueltype("") {}
istream& operator>>(istream& is, Car& c) {
    is >> static_cast<Vehicle&>(c); 
    cout << "Введите количество мест: ";
    is >> c.seats;
    cout << "Введите тип топлива: ";
    getline(is >> ws, c.fueltype); 
    return is;
}