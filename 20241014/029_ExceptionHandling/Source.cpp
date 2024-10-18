#include <iostream>
#include "Stack.h"
using namespace std;

void Test1()
{
	Stack s1(5);

	try
	{
		s1.Push(1);
		s1.Push(2);
		s1.Push(3);
		s1.Push(4);
		s1.Push(5);
		s1.Push(6);
		s1.Push(7);
		s1.Push(8);
	}
	catch (std::out_of_range& ex)
	{
		cout << "Exception" << endl;
	}
	catch (std::exception& ex)
	{
		cout << "Exception: " << ex.what() << endl;
	}

	try
	{
		cout << s1.Pop() << endl;
		cout << s1.Pop() << endl;
		cout << s1.Pop() << endl;
		cout << s1.Pop() << endl;
		cout << s1.Pop() << endl;
		cout << s1.Pop() << endl;
		cout << s1.Pop() << endl;
		cout << s1.Pop() << endl;
	}
	catch (std::domain_error& ex)
	{
		cout << "Exception: " << ex.what() << endl;
	}
	catch (...)
	{
		cout << "Catch All!" << endl;
		cout << "Releasing resources" << endl;
		cout << "Re-throwing the same exception again" << endl;
		throw;
	}
}

int main()
{
	Test1();


	// Take a look at set_termiate() later

	return 0;
}