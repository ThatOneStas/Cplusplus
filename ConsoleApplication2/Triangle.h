#pragma once
#include <iostream>
using namespace std;
#include "Base.h"
class Triangle :
    public Base
{
private:
    int h;
    int l;
public:
    Triangle(int height, int lenght) {
        this->h = height;
        this->l = lenght;
    }
    void area() override {
        cout << (h*l)/2 << endl;
    }
};
