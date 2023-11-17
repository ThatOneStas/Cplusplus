#pragma once
#include <iostream>
#include "Transport.h"
using namespace std;
class Bicycle :
    public Transport
{
private:
    int time;
public:
    Bicycle(int time) {
        this->time=time;
    }
    void calcPrice() override {
        cout << time / 10 * 5;
    }
};

