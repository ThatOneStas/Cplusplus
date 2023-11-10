#pragma once
#include "Text.h"
class DailyTask :
	public Text
{
private:
	int hour;
	int minute;
public:
	DailyTask(string simple_task, int hour, int minute) : Text(simple_task) {
		this->hour = hour;
		this->minute = minute;
	}

	void getTasks() override {
		cout << "Time: " << hour << "." << minute << " Task:" << simple_task << endl;
	}
};


