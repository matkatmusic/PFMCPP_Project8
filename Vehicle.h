#pragma once

#include <string>
#include <iostream>

struct Vehicle
{
    Vehicle(const std::string& n);
    
    virtual ~Vehicle(); // FIXME these are implementations.  move them to the CPP file
    Vehicle(const Vehicle&);
    Vehicle& operator = (const Vehicle&);
    
    virtual void setSpeed(int s);
    virtual void tryToEvade();

    int speed = 0;
protected:
    std::string name;
};
