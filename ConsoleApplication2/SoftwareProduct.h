#pragma once
#include <iostream>
#include "ProductDevelopment.h"
using namespace std;

class SoftwareProduct :
    public ProductDevelopment
{
public:
    void design() override {
        cout << "Software desing";
    }

    void produce() override {
        cout << "Software: produced";
    }
};

