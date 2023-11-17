#pragma once
#include "Musician.h"
#include <iostream>
using namespace std;

class Band
{
private:
	Musician* member1 = new Musician("Joe","Violen");
	Musician* member2 = new Musician("Jane", "Guitar");
	Musician* member3 = new Musician("John", "Flute");
public:
	void start() {
		cout << member1->getName() << " is playing " << member1->getInstrument() << endl;
		cout << member2->getName() << " is playing " << member2->getInstrument() << endl;
		cout << member3->getName() << " is playing " << member3->getInstrument() << endl;
	}
};

