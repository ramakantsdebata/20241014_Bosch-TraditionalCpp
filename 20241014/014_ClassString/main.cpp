#include <iostream>
#include "cString.h"

void PrintStr(const cString& str)
{
	//std::cout << "Hi" << std::endl;
	std::cout << "[" << str.getLen() << "] --> [" << str.getString() << "]" << std::endl;
}

int main()
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

	return 0;
}