#pragma once
#include <iostream>
#include "Component.h"
using namespace std;
class MobilePhone
{
private:
	Component* component;
public:
	MobilePhone(bool display, bool camera, bool proccesor) {
		this->component = new Component(display, camera, proccesor);
	}
	void getData() {
		cout << "Display: " << component->getDisplay() << endl <<
			"Camera: " << component->getCamera() << endl <<
			"Processor: " << component->getProccesor() << endl;
	}
};

