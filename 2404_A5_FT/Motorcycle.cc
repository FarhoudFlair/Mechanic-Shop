#include "Motorcycle.h"
#include <iostream>
using namespace std;

Motorcycle::Motorcycle(string ma, string mo, string col, int y, int m, bool s) : Vehicle(ma,mo,col,y,m), sidecar(s) {}

bool Motorcycle::hasSidecar() { return sidecar; }

string Motorcycle::toString()
{
  ostringstream output;
  ostringstream make_model;
  make_model << getMake() << " " << getModel();

  output << "     MOTORCYCLE:  ";
  output << "\t" << setw(7) << getColour() << " " << getYear() << " " << setw(17);
  output << make_model.str() << " (" << getMilage() << "km) ";
  output << (hasSidecar() ? "has sidecar" : "doesn't have sidecar") << endl;
  return output.str();
}
