#include "HighwayPatrol.h"
#include "Car.h"
#include "Motorcycle.h"
#include "SemiTruck.h"

#include <iostream>

HighwayPatrol::HighwayPatrol() : Vehicle("HighwayPatrol") {}

HighwayPatrol::~HighwayPatrol() = default;
HighwayPatrol::HighwayPatrol(const HighwayPatrol&) = default;
HighwayPatrol& HighwayPatrol::operator = (const HighwayPatrol&) = default;

void HighwayPatrol::scanHighway(Highway* h)
{
    std::cout << name << ": scanning highway for speeders" << std::endl;

    for(size_t i = h->vehicles.size(); --i != 0;)
    {
        auto* v = h->vehicles[i];
        if( v->speed > h->speedLimit + 5 )
        {
            pullOver(v, v->speed > (h->speedLimit + 15), h );
            h->changeSpeed(50); //slow down for the highway patrol
        }
    }
}

void HighwayPatrol::pullOver(Vehicle* v, bool willArrest, Highway* h)
{
    std::cout << "\n\n";
    std::cout << name << ": vehicle is traveling " << v->speed - h->speedLimit << " miles per hour over the speed limit" << std::endl;
    if(willArrest)
    {
            std::string vehicleType;
        if(dynamic_cast<Car*>(v)) 
        { 
            vehicleType = "car"; 
        }
        else if(dynamic_cast<Motorcycle*>(v)) 
        { 
            vehicleType = "motorcycle"; 
        }
        else if(dynamic_cast<SemiTruck*>(v)) 
        { 
            vehicleType = "semi truck"; 
        }
        else 
        { 
            vehicleType = "unknown vehicle type";  
        }
            //print the vehicle type in this std::cout between "THE [" and "] PULL". 
            std::cout << name << ": YOU IN THE " << vehicleType << " PULL OVER AND SHOW YOUR HANDS" << std::endl;
            std::cout << "EVERYONE ELSE, SLOW DOWN!! \n\n\n";
            h->removeVehicle(v);
    }
}



