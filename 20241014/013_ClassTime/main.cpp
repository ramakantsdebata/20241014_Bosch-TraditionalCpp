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

void Test3()
{
	cTime t1(25, 42, 16), t2(0, 5, 2);

	cTime totalTime;
	totalTime = t1 + t2;
	PrintTime(totalTime);

/*
ctor(int, int, int)
ctor(int, int, int)
ctor()	
ctor(int, int, int)
ctor(const cTime&)
Time of the t object --> 18:47:25
*/
/*
ctor(int, int, int)
ctor(int, int, int)
ctor()
ctor(int, int, int)
ctor(const cTime&)
Time of the t object --> 18:47:25
*/
}


void Test4()
{
	cTime t1(25, 42, 16), t2(0, 5, 2);
	std::cout << t1 << " " << t2 << std::endl;
}
int main()
{
	//Test1();
	//Test2();
	//Test3();
	Test4();

	return 0;
}