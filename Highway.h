#pragma once

#include <vector>
#include <algorithm>

#include "Car.h"
#include "Motorcycle.h"
#include "SemiTruck.h"
#include "Vehicle.h"

struct HighwayPatrol;

struct Highway
{
public:
    void changeSpeed(int newSpeed);
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
private:
    int speedLimit = 65;
    std::vector<Vehicle*> vehicles;
    void addVehicleInternal(Vehicle* v);
    void removeVehicleInternal(Vehicle* v);
    friend HighwayPatrol;
};


