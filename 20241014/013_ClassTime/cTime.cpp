#include "cTime.h"
#include <iostream>

cTime::cTime()
{
	std::cout << "ctor()" << std::endl;
	m_Seconds = m_Minutes = m_Hours = 0;
}

cTime::cTime(int sec, int min=0, int hrs=0)
{
	std::cout << "ctor(int, int, int)" << std::endl;
	m_Seconds = sec;
	m_Minutes = min;
	m_Hours = hrs;
}

cTime::cTime(const cTime& obj)
{
	std::cout << "ctor(const cTime&)" << std::endl;
	m_Seconds = obj.m_Seconds;
	m_Minutes = obj.m_Minutes;
	m_Hours = obj.m_Hours;
}

void cTime::setSeconds(int val)
{
	if (val < 60 && val >= 0)
		m_Seconds = val;
}

void cTime::setMinutes(int val)
{
	if (val < 60 && val >= 0)
		m_Minutes = val;
}

void cTime::setHours(int val)
{
	if (val < 24 && val >= 0)
		m_Hours = val;
}

int cTime::getSeconds() const
{
	return m_Seconds;
}

int cTime::getMinutes() const
{
	return m_Minutes;
}

int cTime::getHours() const
{
	return m_Hours;
}


// Pre-increment operator
cTime& cTime::operator++()
{
	m_Seconds++;
	return *this;
}

// Post-increment operator
//cTime cTime::operator++(int)
//{
//	cTime temp(*this);
//	m_Seconds++;
//	return temp;
//}

cTime operator++(cTime& obj, int)
{
	cTime temp(obj);
	//obj.setSeconds(obj.getSeconds() + 1);
	obj.m_Seconds++;
	return temp;
}

void Display(const cTime& obj)
{
	std::cout << "Time is : " << obj.m_Hours << ":" << obj.m_Minutes << ":" << obj.m_Seconds << std::endl;
}

cTime cTime::operator+(const cTime& obj)
{
	//cTime res(m_Seconds + obj.m_Seconds, m_Minutes + obj.m_Minutes, m_Hours + obj.m_Hours);
	//return res;

	return cTime(m_Seconds + obj.m_Seconds, m_Minutes + obj.m_Minutes, m_Hours + obj.m_Hours);
}

//ostream& operator<<(ostream& out, const cTime& t)
//{
//	out << "Time object ["
//		<< t.getHours() << ":"
//		<< t.getMinutes() << ":"
//		<< t.getSeconds() << "]";
//	return out;
//}

ostream& operator<<(ostream& out, const cTime& t)
{
	out << "Time object ["
		<< t.m_Hours << ":"
		<< t.m_Minutes << ":"
		<< t.m_Seconds << "]";
	return out;
}