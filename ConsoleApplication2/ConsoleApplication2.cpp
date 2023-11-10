
#include <iostream>
#include "ProductDevelopment.h"
#include <vector>

#include "Base.h"
#include "Rectangle.h"
#include "Triangle.h"

#include "Text.h"
#include "GreatTask.h"
#include "DeadLineTask.h"
#include "DailyTask.h"
using namespace std;

int main()
{
	/*Base* rectangle = new Rectangle(10, 10);
	Base* triangle = new Triangle(10, 10);
	vector<Base*> arr;
	arr.push_back(rectangle);
	arr.push_back(triangle);
	for (Base* i : arr) {
		i->area();
	}*/

	Text* base = new Text("Simple task");
	Text* great = new GreatTask("Great task");
	Text* deadline = new DeadLineTask("Deadline task",21,6);
	Text* daily_1 = new DailyTask("First day", 16, 30);
	Text* daily_2 = new DailyTask("Second day", 12, 10);
	base->getTasks();
	great->getTasks();
	deadline->getTasks();
	daily_1->getTasks();
	daily_2->getTasks();
}
