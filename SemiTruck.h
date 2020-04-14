#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);

    SemiTruck(const SemiTruck&) = default;
    SemiTruck& operator = (const SemiTruck&) = default;

    void pullOver();

    void tryToEvade() override;

    void setSpeed(int s) override;
};
