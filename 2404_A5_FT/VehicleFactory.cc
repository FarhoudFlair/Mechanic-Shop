#include "VehicleFactory.h"


VehicleFactory::VehicleFactory() {}

//Car object
Vehicle* VehicleFactory::create(string ma, string mo, string col, int y, int m)
{
  return new Car(ma, mo, col, y, m);
}

//Truck object
Vehicle* VehicleFactory::create(string ma, string mo, string col, int y, int m, int a)
{
  return new Truck(ma, mo, col, y, m, a);
}

//Motorcycle object
Vehicle* VehicleFactory::create(string ma, string mo, string col, int y, int m, bool s)
{
  return new Motorcycle(ma, mo, col, y, m, s);
}
