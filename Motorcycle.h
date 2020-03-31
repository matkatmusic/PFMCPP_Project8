#pragma once

#include <iostream>
#include <limits>
#include "Vehicle.h"

struct Motorcycle : public Vehicle
{
    Motorcycle(const std::string& n);
    
    void lanesplitAndRace(int topSpeed = std::numeric_limits<int>::max());
    
    void tryToEvade() override;

    void setSpeed(int s) override;
};


