#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);

    virtual ~SemiTruck();
    SemiTruck(const SemiTruck&);
    SemiTruck& operator = (const SemiTruck&);

    void pullOver();
};
