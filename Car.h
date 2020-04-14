#pragma once

#include <string>
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);

    //virtual ~Car() = default;
    Car(const Car&) = default;
    Car& operator = (const Car&) = default;

    void closeWindows();

    void tryToEvade();
};

