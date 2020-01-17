#include "Motorcycle.h"

Motorcycle::Motorcycle(const std::string& n) : Vehicle(n) {}

void Motorcycle::lanesplitAndRace( int topSpeed )
{
    setSpeed(topSpeed);
    std::cout << name << (topSpeed > 90 ? ": yeeehawwww" : ": zzzzzzzz") << std::endl;
}
void Motorcycle::tryToEvade()
{
    std::cout << name << ": you'll never take me alive, ya dirty coppers!" << std::endl;
    setSpeed(120);
}

void Motorcycle::setSpeed(int s)
{
    if( s < 90 )
    {
        //ignore the request to lower the speed
        std::cout<< name << ": uh, no.  i'm currently lane-splitting and racing" << std::endl;
    }
    else
    {
        Vehicle::setSpeed(s);
    }
}