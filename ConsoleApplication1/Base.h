#pragma once

#include <iostream>
using namespace std;

class Base
{
	private:
		string name;
		int age;
	public:
		Base() {
			name = "NoName";
			age = 0;
		}
		string getName() {
			return this->name;
		}
		void setName(string n) {
			this->name = n;
		}
		int getAge() {
			return this->age;
		}

		void setAge(int age_) {
			this->age = age_;
		}
};

