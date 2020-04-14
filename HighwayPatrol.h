#pragma once 

#include "Vehicle.h"
#include "Highway.h"

struct HighwayPatrol : public Vehicle 
{
    HighwayPatrol();
    
    //virtual ~HighwayPatrol() = default;
    HighwayPatrol(const HighwayPatrol&) = default;
    HighwayPatrol& operator = (const HighwayPatrol&) = default;

    void scanHighway(Highway* h);

    void pullOver(Vehicle* v, bool willArrest, Highway* h);

    void tryToEvade() override;

    void setSpeed(int s) override;
};

