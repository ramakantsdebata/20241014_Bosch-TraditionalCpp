#include <iostream>
#include "Book.h"
using namespace std;


void Test1()
{
	cString Library("State Library");
	Book bk1(1, "Atomic Habits", &Library);
	cout << bk1 << endl;

	{
		Book bk2(2, "Merchants of Venice", &Library);
		cout << bk2 << endl;
	}
}

int main()
{
	Test1();

	return 0;
}