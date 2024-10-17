#include <iostream>
#include "cString.h"
using namespace std;

void Test1()
{
	cString s1("Test String");
	cout << s1 << endl;

	cout << s1[5] << endl;

	s1[0] = 'B';
	cout << s1 << endl;
}

void Test2()
{
	const cString s1("Test String");
	cout << s1 << endl;

	cout << s1[5] << endl;
	cout << s1.operator[](5) << endl;

	cout << &s1[5] << endl;
	//s1[0] = 'B';
	cout << s1 << endl;
}

int main()
{
	//Test1();
	Test2();

	return 0;
}