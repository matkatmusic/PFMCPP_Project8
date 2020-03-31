#pragma once

#include <vector>
#include <algorithm>
#include "Vehicle.h"


struct Highway
{
public:
    void changeSpeed(int newSpeed);
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
    int speedLimit = 65;
    std::vector<Vehicle*> vehicles;
private:
    void addVehicleInternal(Vehicle* v);
    void removeVehicleInternal(Vehicle* v);
};


