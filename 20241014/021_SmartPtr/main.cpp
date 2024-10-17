#include<iostream>
#include "SmartPtr.h"
using namespace std;

class Point
{
	int m_x, m_y;

public:
	Point(int x, int y):m_x(x), m_y(y)
	{}
	void display()
	{
		cout << "[" << m_x << ", " << m_y << "]" << endl;
	}
};

void Test1()
{
	//int* p1 = new int(100);
	//cout << *p1 << endl;
	// Forget to release the memory - Leakage
	Point* p2 = new Point(1, 2);
	Point* p3 = p2;		// 
	Point* p4;
	p4 = p2;



	//p2->display();
}

void Test2()
{
	//SmartPtr sp(new int(100));
	//cout << *sp << endl;

	SmartPtr sp1(new Point(1, 2));
	(*sp1).display();
	sp1->display();

	SmartPtr sp2 = sp1;  //SmartPtr sp2(sp1);
	SmartPtr sp4;
	sp4 = sp1;			// sp4.operator=(sp1);

}
int main()
{
	Test1();
	Test2();

	return 0;
}