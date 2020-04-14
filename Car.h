#pragma once

#include <string>
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);

    //virtual ~Car() = default;
    Car(const Car&);
    Car& operator = (const Car&);

    void closeWindows();

    void tryToEvade();
};

