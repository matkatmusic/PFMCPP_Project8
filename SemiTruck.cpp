#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) { }

SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator = (const SemiTruck&) = default;

void SemiTruck::pullOver() 
{
    std::cout << name << ": pulling over!" << std::endl;
    setSpeed(0);
}
