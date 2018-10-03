#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

class Truck : public Vehicle {

public:
  Truck(string, string, string, int, int, int);
  virtual string toString();
  int getNumAxles();

private:
  int numAxles;

};


#endif
