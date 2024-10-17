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

	{
		SmartPtr sp5 = sp4;
		sp5->display();
	}

	sp4->display();
}


void Operate(auto_ptr <Point> ap)
{
	ap->display();
}

void Test3()
{
	int* p1 = new int(100);
	// Some work
	delete p1;


	auto_ptr<int> ap1(new int(100));
	cout << *ap1 << endl;

	auto_ptr<Point> ap2(new Point(1, 2));
	ap2->display();


	// Bug 1
	//{
	//	auto_ptr<Point> ap3 = ap2;
	//	ap3->display();
	//}
	//ap2->display();


	// Bug 2
	Operate(ap2);

	ap2->display();
}

int main()
{
	//Test1();
	//Test2();
	Test3();

	return 0;
}