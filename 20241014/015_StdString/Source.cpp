#include <iostream>
#include<string>
using namespace std;


const char* AppendStr(const char* str1, const char* str2)
{
	char* temp = new char[strlen(str1) + strlen(str2) + 1];
	strcpy_s(temp, strlen(str1) +1, str1);
	strcat_s(temp, strlen(str1) + strlen(str2) + 1, str2);
	return temp;
}

void Test1()
{
	const char* s1 = "Test";
	const char* s2 = "String";

	const char * concatenated = AppendStr(s1, s2);

	cout << concatenated << endl;
	delete[] concatenated;
}

////////////////////////////////////////////////////////////////////////


void Test2()
{
	string s1 = "Test";
	cout << s1.length() << endl;
	cout << s1 << endl;
	cout << s1.c_str() << endl;

	s1.append(" String");
	cout << s1 << endl;

	cout << s1[5] << endl;
	cout << s1.at(5) << endl;

	int index = s1.find("tri");
	cout << index << endl;

	s1.clear();
	cout << s1.length() << "[" << s1 << "]" << endl;

	cout << "Is String empty? " << (s1.empty() == true ? "True" : "False");

	// Reference site: cppreference.com
	// Look for std::basic_string to learn about sthe std::string type that we have used above.
}

int main()
{
	//Test1();
	Test2();

	return 0;
}