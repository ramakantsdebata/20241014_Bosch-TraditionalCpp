#include <iostream>
#include "Birds.h"
using namespace std;

void Test1()
{
	//Bird b1("AnyColor", 0);
	//cout << b1.display() << endl;

	Lark l1("Brown", 200, "Temperate");
	cout << l1.display() << endl;
}

void Test2()
{
	Lark* pLark = new Lark("Brown", 200, "Temperate");
	cout << pLark->display() << endl;
	pLark->speak();
	pLark->fly();
	pLark->buildNest();
	delete pLark;
}

void Test3()
{
	Bird* pBird = new Lark("Brown", 200, "Temperate");
	cout << pBird->display() << endl;
	pBird->speak();
	pBird->fly();	// Bird::fly()
	//pBird->buildNest();
	delete pBird;
}


class Test
{
	int m_a, m_b;
public:
	virtual void display() {}
};

void Test4()
{
	Test obj;
	cout << sizeof(obj) << endl;
}

void Test5()
{
	Bird* ptr = new Penguin("BlackWhite", 30, "Emperor");
	ptr->display();
	ptr->fly();

}

int main()
{
	Test5();

	return 0;
}