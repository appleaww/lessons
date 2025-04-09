#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
#include <string>
using namespace std;
class Car : public Vehicle {
private:
    int seats;
    string fueltype;
public:
    Car();
    Car(const string& model, int year, double mileage,int seats, const string& fueltype);
    void displayInfo() const override;
    string ShowModel() const override;
    friend istream& operator>>(istream& is, Car& c);
};
#endif