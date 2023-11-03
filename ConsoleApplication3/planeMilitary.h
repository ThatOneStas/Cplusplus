#pragma once
#include <iostream>
#include <vector>
#include "Plane.h"
class planeMilitary :
    public Plane
{
private:

public:
    planeMilitary(int num, string name)
        : Plane(num, name) {}
    void startFlight() override {
        cout << "Starting Military";
    }
};

