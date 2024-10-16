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

int cTime::getSeconds()
{
	return m_Seconds;
}

int cTime::getMinutes()
{
	return m_Minutes;
}

int cTime::getHours()
{
	return m_Hours;
}
