#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

class Car : public Vehicle {

public:
  Car(string, string, string, int, int);
  virtual string toString();


};


#endif
