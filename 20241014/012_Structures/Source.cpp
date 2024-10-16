#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;

public:
	int sum()
	{
		x = 1;
		y = 2;
		return x + y;
	}
};


struct Shape
{
	Point vertices[3];
	Point* pPoint;
};

int main()
{
	Point p1;
	//p1.x = 1;
	//p1.y = 2;

	cout << p1.sum() << endl;
}
