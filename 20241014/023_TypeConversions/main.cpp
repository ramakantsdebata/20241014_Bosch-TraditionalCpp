#include <iostream>
#include "Book.h"
#include "cString.h"
using namespace std;

void Test1()
{
	float x = 10.5f;
	int y = (int)x;		// c-style typecasting
	int z = int(x);		// constructor syntax


	// Native type to User-defined type conversion
	const char* s = "Test String";
	cString str = cString(s);  //cString str = cString(s)

}

int main()
{
	Test1();

	return 0;
}