#include "HighwayPatrol.h"
#include "Car.h"
#include "HighwayPatrol.h"
#include "Motorcycle.h"
#include "SemiTruck.h"
#include <iostream>

HighwayPatrol::HighwayPatrol() : Vehicle("HighwayPatrol")
{

}

void HighwayPatrol::scanHighway(Highway* h)
{
    std::cout << name << ": scanning highway for speeders" << std::endl;

    // Is it worth casting to silence warnings like these? 

    // Explicitly casting h->vehicles.size() in order to silence the [-Wshorten-64-to-32] warning
    for(int i = static_cast<int>(h->vehicles.size()); --i >= 0;)
    {
        // Explicitly casting i in order to silence the [-Wsign-conversion] warning
        auto* v = h->vehicles[static_cast<unsigned long int>(i)];
        if( v->speed > h->speedLimit + 5 )
        {
            pullOver(v, v->speed > (h->speedLimit + 15), h );
            h->changeSpeed(50); //slow down for the highway patrol
        }
    }
}

void HighwayPatrol::pullOver(Vehicle* v, bool willArrest, Highway* h)
{
    // I can't figure out why this casting of 'v' isn't working...
    std::string vehicleType;
    if(dynamic_cast<Car*>(v)) { vehicleType = "car"; }
    else if(dynamic_cast<Motorcycle*>(v)) { vehicleType = "motorcycle"; }
    else if(dynamic_cast<SemiTruck*>(v)) { vehicleType = "semi truck"; }
    else { vehicleType = "error";  }

    std::cout << "\n\n";
    std::cout << name << ": vehicle is traveling " << v->speed - h->speedLimit << " miles per hour over the speed limit" << std::endl;
    if(willArrest)
    {
        //print the vehicle type in this std::cout between "THE [" and "] PULL". 
        std::cout << name << ": YOU IN THE " << vehicleType << " PULL OVER AND SHOW YOUR HANDS" << std::endl;
        std::cout << "EVERYONE ELSE, SLOW DOWN!! \n\n\n";
        h->removeVehicle(v);
    }
}

void HighwayPatrol::tryToEvade() {}

void HighwayPatrol::setSpeed(int s) 
{
    std::cout << "\nHighway is adjusting " << name << "'s speed to " << s << " mph" << std::endl;
    speed = s;
}   



