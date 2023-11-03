#pragma once
#include <iostream>
using namespace std;
class Plane
{
private:
	int num;
	string name;
public:
	Plane(int num, string name) {
		this->name = name;
		this->num = num;
	}
	int getNum() {
		return num;
	}
	string getName() {
		return name;
	}
	virtual void startFlight() {
		cout << "Starting";
	}
};

