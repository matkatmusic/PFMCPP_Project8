#pragma once

#include <vector>
#include <algorithm>

struct Vehicle;
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


