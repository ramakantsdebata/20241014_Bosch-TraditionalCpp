#include <iostream>
//#include "Point.h"
#include "Header.h"
using namespace std;


void Test1()
{
	int res1 = add(1, 2);
	float res2 = add(1, 1.2f);
	int res3 = add(1, 1);
	add(1, 2);
}

void Test2()
{
	int m = 10, n = 20;
	cout << add(m, n) << endl;

	Point p1 = { 1, 2 }, p2 = { 11, 12 };
	Point res = add(p1, p2);
	cout << res.x << ", " << res.y << endl;
}

int main()
{
	Test1();
	Test2();
	return 0;
}