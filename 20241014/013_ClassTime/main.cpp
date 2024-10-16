#include <iostream>
#include "cTime.h"


void PrintTime(cTime t)
{
	std::cout << "Time of the t object --> "
		<< t.getHours() << ":"
		<< t.getMinutes() << ":"
		<< t.getSeconds() << std::endl;
}

void Test1()
{
	cTime t;
	t.setSeconds(68);
	t.setMinutes(122);
	t.setHours(34);

	PrintTime(t);


	cTime t2(1, 1, 1);
	PrintTime(t2);
}

void Test2()
{
	cTime t1;
	PrintTime(t1);

	cTime t2(++t1);
	PrintTime(t2);

	cTime t3(t1++);
	PrintTime(t3);

	PrintTime(t1);

	Display(t2);
}

int main()
{
	//Test1();
	Test2();
	return 0;
}