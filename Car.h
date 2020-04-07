#pragma once

#include <string>
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);

    void closeWindows();

    void tryToEvade();
};

