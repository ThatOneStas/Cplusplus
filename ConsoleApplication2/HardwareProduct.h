#pragma once
#include <iostream>
#include "ProductDevelopment.h"
using namespace std;

class HardwareProduct :
    public ProductDevelopment
{
public:
    void design() override {
        cout << "Hardwere desing";
    }

    void produce() override {
        cout << "Hardwere: produced";
    }
};

