#pragma once
#include <iostream>
using namespace std;
#include "Transport.h"
class Auto :
    public Transport
{
private:
    int time;
public:
    Auto(int time) {
        this->time=time;
    }
    void calcPrice() override {
        cout << time/10*20;
    }
};

