#pragma once
#include <iostream>
using namespace std;

class Musician
{
private:
	string name;
	string instrument;
public:
	Musician(string name, string instrument) {
		this->name = name;
		this->instrument = instrument;
	}
	string getName() {
		return name;
	}
	string getInstrument() {
		return instrument;
	}
};

