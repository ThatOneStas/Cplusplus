#pragma once
#include <iostream>
#include <vector>
#include "Plane.h"
class planePassenger :
    public Plane
{
private:

public:
    planePassenger(int num, string name)
        : Plane(num, name) {}
    void startFlight() override {
        cout << "Starting Passenger";
    }
};