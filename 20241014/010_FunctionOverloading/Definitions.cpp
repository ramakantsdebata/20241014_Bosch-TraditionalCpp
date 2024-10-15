#include <iostream>
#include "Point.h"
#include "Header.h"
using namespace std;

int add(int a, int b)
{
	cout << "(1)" << endl;
	return a + b;
}

float add(int x, float y)
{
	cout << "(2)" << endl;
	return 1;
}

Point add(Point a, Point b)
{
	Point sum;
	sum.x = a.x + b.x;
	sum.y = a.y + b.y;
	return sum;
}

