#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) { }

void SemiTruck::pullOver() 
{
    std::cout << name << ": pulling over!" << std::endl;
    setSpeed(0);
}

void SemiTruck::tryToEvade() 
{

}

void SemiTruck::setSpeed(int s) 
{
    std::cout << "\nHighway is adjusting " << name << "'s speed to " << s << " mph" << std::endl;
    speed = s;
}
