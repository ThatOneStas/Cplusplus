
#include <iostream>
#include "Base.h"
using namespace std;

int main()
{
    Base b;
    //b.setAge(11);
    //b.setName("a");
    cout << b.getAge() << endl;
    cout << b.getName() << endl;

    Base c;
    //c.setAge(20);
    //c.setName("b");
    cout << c.getAge() << endl;
    cout << c.getName() << endl;
}
