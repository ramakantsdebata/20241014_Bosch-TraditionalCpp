#include <iostream>
#include <string>
#include <vector>
#include "Stack.h"
using namespace std;

/*
int add(int a, int b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}
*/

template<typename T>
T add(T a, T b)
{
	return a + b;
}

// Look up template specialisation

// Koenig lookup

void Test1()
{
	cout << add(1, 2) << endl;
	cout << add(1.1f, 2.2f) << endl;
	cout << add(string("Test"), string("String")) << endl;
	//cout << add("Test", "String") << endl;
}


void Test2()
{
	Stack<int> s1(5);
	s1.Push(1);
	s1.Pop();

	Stack<string> s2(10);
	//string str1("One");
	s2.Push(string("One"));
	s2.Push(string("Two"));
	cout << s2.Pop() << endl;
	cout << s2.Pop() << endl;


}

void Test3()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);

	vector<int> v2;
	v2.reserve(20);

	cout << v1[2] << endl;

	for (int i = 0; i < v2.capacity(); i++)
		v2[i] = i * 10;

	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << endl;

}
int main()
{
	Test3();

	return 0;
}