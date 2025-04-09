#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle {
protected:
    string model;
    int year;
    double mileage;
public:
    Vehicle() = default;
    Vehicle(const string& model, int year, double mileage);
    virtual void displayInfo() const;
    virtual string ShowModel() const;
    Vehicle operator+(double km);
    bool operator==(const Vehicle& other) const;
    friend istream& operator>>(istream& is,  Vehicle& v);
    friend ostream& operator<<(ostream& os, const Vehicle& v);
};
#endif