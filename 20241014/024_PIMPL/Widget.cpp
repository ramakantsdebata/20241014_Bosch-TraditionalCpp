#include "Widget.h"
#include <iostream>
using namespace std;

class Widget::Impl
{
	int m_Data;

public:
	Impl(int data) : m_Data(data)
	{}

	void doSomething()
	{
		cout << "Doing something..." << m_Data << endl;
	}
};

Widget::Widget(int data) :m_pImpl(new Impl(data))
{}

void Widget::doSomething()
{
	m_pImpl->doSomething();
}

Widget::~Widget()
{
	delete m_pImpl;
}