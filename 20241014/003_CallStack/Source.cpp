#include <iostream>
using namespace std;

void Baz()
{
	cout << "Baz" << endl;
}

void Bar()
{
	cout << "Bar" << endl;
	Baz();
}

void Foo()
{
	cout << "Foo" << endl;
	Bar();
}

int main()
{
	cout << "Main" << endl;
	Foo();

	return 0;
}