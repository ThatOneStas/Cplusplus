#pragma once
#include <iostream>
using namespace std;
#include "Base.h"
class Rectangle :
    public Base
{
private:
    int h;
    int l;
public:
    Rectangle(int height, int lenght) {
        this->h = height;
        this->l = lenght;
    }
    void area() override {
        cout << h * l << endl;
    }
};

