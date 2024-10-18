#include <iostream>
#include "Birds.h"
using namespace std;

void Test1()
{
	Bird b1("AnyColor", 0);
	cout << b1.display() << endl;

	Lark l1();
	//Lark l1("Brown", 200);
	//cout << l1.display() << endl;
}

int main()
{
	Test1();

	return 0;
}