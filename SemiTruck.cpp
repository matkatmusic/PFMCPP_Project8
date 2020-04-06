#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) { }

void SemiTruck::pullOver() 
{
    std::cout << name << ": pulling over!" << std::endl;
    setSpeed(0);
}
