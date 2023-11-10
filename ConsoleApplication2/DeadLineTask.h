#pragma once
#include "Text.h"
class DeadLineTask :
    public Text
{
private:
	int day;
	int month;
public:
	DeadLineTask(string simple_task, int day, int month) : Text(simple_task) {
		this->day = day;
		this->month = month;
	}

	void getTasks() override {
		cout << "Date: " << day << "." << month << " Task:" << simple_task << endl;
	}
};

