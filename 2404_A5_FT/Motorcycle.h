#ifndef Motorcycle_H
#define Motorcycle_H

#include "Vehicle.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

class Motorcycle : public Vehicle {

public:
  Motorcycle(string, string, string, int, int, bool);
  virtual string toString();
  bool hasSidecar();

private:
  bool sidecar;

};


#endif
