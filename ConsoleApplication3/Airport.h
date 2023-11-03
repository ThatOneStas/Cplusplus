#pragma once
#include <iostream>
#include "Plane.h"
#include <vector>
using namespace std;
class Airport
{
private:
	vector<Plane*> planes;
public:
	void addPlane(Plane* plane) {
		planes.push_back(plane);
	}

	void showPlanes() {
		for (int i = 0; i < planes.size(); i++) {
			cout << planes[i]->getName() << "-" << planes[i]->getNum() << " ";
		}
	}
};

