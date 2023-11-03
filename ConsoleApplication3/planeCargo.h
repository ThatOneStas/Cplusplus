#pragma once
#include <iostream>
#include <vector>
#include "Plane.h"
class planeCargo :
    public Plane
{
private:

public:
    planeCargo(int num,string name) 
        : Plane(num,name) {}
    void startFlight() override {
        cout << "Starting Cargo";
    }
};
