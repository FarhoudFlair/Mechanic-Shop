#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(string ma, string mo, string col, int y, int m) : Vehicle(ma,mo,col,y,m) {}


string Car::toString()
{
  ostringstream output;
  ostringstream make_model;
  make_model << getMake() << " " << getModel();

  output << "     CAR:         ";
  output << "\t" << setw(7) << getColour() << " " << getYear() << " " << setw(17);
  output << make_model.str() << " (" << getMilage() << "km)" << endl;
  return output.str();
}
