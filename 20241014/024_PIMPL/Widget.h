#ifndef WIDGET_H
#define WIDGET_H

class Widget
{
	class Impl;
	Impl* m_pImpl;
public:
	Widget(int data);
	void doSomething();
	~Widget();
};

#endif  // WIDGET_H
