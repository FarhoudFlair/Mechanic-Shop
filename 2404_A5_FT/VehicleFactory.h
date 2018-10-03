#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
//#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"

using namespace std;

class VehicleFactory {

  public:
    VehicleFactory();
    Vehicle* create(string, string, string, int, int); //Car constructor
    Vehicle* create(string, string, string, int, int, int); //Truck constructor
    Vehicle* create(string, string, string, int, int, bool); //Motorcycle constructor

};



#endif
