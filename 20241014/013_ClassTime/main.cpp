#include <iostream>
#include "cTime.h"


void PrintTime(cTime t)
{
	std::cout << "Time of the t object --> "
		<< t.getHours() << ":"
		<< t.getMinutes() << ":"
		<< t.getSeconds() << std::endl;
}
int main()
{
	cTime t;
	t.setSeconds(68);
	t.setMinutes(122);
	t.setHours(34);

	PrintTime(t);


	cTime t2(1, 1, 1);
	PrintTime(t2);

	return 0;
}