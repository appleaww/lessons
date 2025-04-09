#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "ElectroCar.h"
#include "truck.h"
#include "bus.h"
using namespace std;

int main() {
    Car SEDAN;
    cin >> SEDAN;
    cout << "\n";
    Truck SAMOSVAL("KAMAZ 45141", 2019, 6666, 6.6);
    ElectroCar ELECTROCAR("TESLA", 2021, 12123, 5, 54);
    Bus CITYBUS("LIAZ", 2019, 233005, 40);

    SEDAN.displayInfo();
    cout << "----------------\n";
    Vehicle v1 = SEDAN+534.23;
    cout << "После увеличения пробега " << v1 << "\n";
    cout << "----------------\n";
    Vehicle* GARAGE[] = {&SEDAN, &SAMOSVAL, &ELECTROCAR,&CITYBUS};
    for (auto vehicle : GARAGE) {
        vehicle->displayInfo();
        cout << "----------------\n";
    }
    if (CITYBUS== SAMOSVAL) {
        cout << "Года выпуска "<<  CITYBUS.ShowModel()<<" и "<<  SAMOSVAL.ShowModel() << " совпадают \n";
        cout << "----------------\n";
    } else {
        cout << "Года выпуска " << CITYBUS.ShowModel()<<" и "<<  SAMOSVAL.ShowModel() << " отличаются \n";
        cout << "----------------\n";
    }
    return 0;
}