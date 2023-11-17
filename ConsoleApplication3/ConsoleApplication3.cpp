
#include <iostream>
#include "Auto.h"
#include "Bicycle.h"

#include "Component.h"
#include "MobilePhone.h"

#include "Band.h"

using namespace std;

int main()
{
	//Auto* time = new Auto(100);
	//Bicycle time_2 = Bicycle(100);
	//time->calcPrice();
	//cout << endl;
	//time_2.calcPrice();

	/*MobilePhone* phone = new MobilePhone(true, false, true);
	phone->getData();*/

	Band* member = new Band();
	member->start();
}
