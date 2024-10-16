#include <iostream>
#include "cString.h"

//void PrintStr(cString str)
void PrintStr(const cString& str)
{
	//std::cout << "Hi" << std::endl;
	std::cout << "[" << str.getLen() << "] --> [" << str.getString() << "]" << std::endl;
}

void Test1()
{
	cString s1;
	PrintStr(s1);

	cString s2("Test String");
	PrintStr(s2);
	s2.setString("Modified");
	PrintStr(s2);

	const cString s3("Template");
	PrintStr(s3);
	//s3.setString("Modified");
	std::cout << s3.getLen() << std::endl;

	//cString s4;
	//s4 = s2;		//Assignment

	cString s5(s2);		//cString s5=s2;
	std::cout << s5.getString() << std::endl;

	s5.setString("New Data");

	using std::cout;
	using std::endl;

	cString s6(s3);
	cout << s6.getString() << endl;
}

void Test2()
{
	cString s1("String Data");
	PrintStr(s1);

	cString s2(s1);
}


void Test3()
{
	cString s1("String Data"), s2("Test String");
	s2 = s1;
	std::cout << s2.getString() << std::endl;
}

int main()
{
	//Test1();
	//Test2();
	Test3();

	return 0;
}