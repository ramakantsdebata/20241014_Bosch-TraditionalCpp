#include <iostream>
#include <string>
#include "Book.h"
#include "cString.h"
using namespace std;

/*
Builtin to Builtin  --> Handled by the compiler
Builtin to UDT		--> (const char*) to cString ; To prevent implicit conversion, we can use the keyword explicit
UDT to Builtin
UDT to UDT
*/
void Test1()
{
	float x = 10.5f;
	int y = (int)x;		// c-style typecasting
	int z = int(x);		// constructor syntax


	// Native type to User-defined type conversion
	const char* s = "Test String";
	cString str = cString(s);  //cString str = cString(s)

	cout << str << endl;
	str = cString("New Data");
	cout << str << endl;


	// UDT to BuiltIn
	cString str2("1234");
	int iData;
	iData = str2;
	int iInc = iData + 1;
	cout << iData << " " << iInc << endl;
	str2 = iInc;
	cout << "Str2 --> " << str2 << endl;

	Book bk1(1, "Atomic Habits");
	cout << bk1 << endl;

	cString str3 = bk1;	
	cout << str3 << endl;
}

void Test2()
{
	cString str1("Test");
	cout << str1 << endl;

	string s1("Test");

	if (s1.compare(str1.getString()) == 0)
	{
		cString str2("Data");
	}

}

int main()
{
	Test1();

	return 0;
}