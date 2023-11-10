#pragma once
#include <iostream>
using namespace std;

class Text
{
protected:
	string simple_task;
public:
	Text(string simple_task) {
		this->simple_task = simple_task;
	}

	virtual void getTasks() {
		cout << simple_task << endl;
	}
};