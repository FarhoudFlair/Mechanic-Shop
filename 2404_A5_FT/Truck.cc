#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(string ma, string mo, string col, int y, int m, int a) : Vehicle(ma,mo,col,y,m), numAxles(a) {}

int Truck::getNumAxles() { return numAxles; }

string Truck::toString()
{
  ostringstream output;
  ostringstream make_model;
  make_model << getMake() << " " << getModel();

  output << "     TRUCK:       ";
  output << "\t" << setw(7) << getColour() << " " << getYear() << " " << setw(17);
  output << make_model.str() << " (" << getMilage() << "km), " << getNumAxles() << " axles" << endl;
  return output.str();
}
