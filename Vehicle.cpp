#include "Vehicle.h"

Vehicle::Vehicle(const std::string& n) : name(n) { }

Vehicle::~Vehicle() = default;
Vehicle::Vehicle(const Vehicle&) = default;
Vehicle& Vehicle::operator = (const Vehicle&) = default;

void Vehicle::setSpeed(int s)  
{
    std::cout << "\nHighway is adjusting " << name << "'s speed to " << s << " mph" << std::endl;
    speed = s;
}

void Vehicle::tryToEvade()
{
    std::cout << name << ": you'll never take me alive, ya dirty coppers!" << std::endl;
    setSpeed(100);
}


