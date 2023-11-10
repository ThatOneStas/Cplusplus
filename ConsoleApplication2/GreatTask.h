#pragma once
#include <iostream>
#include "Text.h"
using namespace std;

class GreatTask :
	public Text
{
public:
	GreatTask(string simple_task) : Text(simple_task) {
	}

	void getTasks() override {
		cout << simple_task << endl;
	}
};