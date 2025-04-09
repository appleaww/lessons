#include "vehicle.h"
#include <iostream>
#include <string>
using namespace std;

Vehicle::Vehicle(const string& model, int year, double mileage):model(model), year(year), mileage(mileage) {}
void Vehicle::displayInfo() const {
    cout << "Модель: " << model << "\nГод выпуска: " << year << "\nПробег: " << mileage << " км\n";
}
string Vehicle::ShowModel()const{
    return model;
}

bool Vehicle::operator==(const Vehicle& other) const {
    return year == other.year;
}
Vehicle Vehicle::operator+(double km) {
    mileage += km;
    return *this; 
}

ostream& operator<<(ostream& os, const Vehicle& v) {
    os << v.model << " (" << v.year << ")";
    return os;
}
istream& operator>>(istream& is, Vehicle& v) {
    cout << "Введите модель: ";
    is >> v.model;
    cout << "Введите год выпуска: ";
    is >> v.year;
    cout << "Введите пробег: ";
    is >> v.mileage;
    return is;
}