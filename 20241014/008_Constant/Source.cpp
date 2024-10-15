#include <iostream>
using namespace std;

//#define MAX_LEN Ten

//const int size = 10;

void Test1()
{
	const int size = 11;
	int arr[size];

	for (int i = 0; i < size; i++)
		arr[i] = i * 10;

	for (int i = 0; i < size; i++)
		cout << arr[i] << endl;
}


void Test2()
{
	int i = 10;
	int* p = &i;

	(*p)++;
	cout << *p << endl;
	cout << i << endl;

	const int* p1 = &i;
	int x = 45;

	p1 = &x;
	//*p1 = 20;
}

void Test3()
{
	const int x = 10;
	int* p1 = (int*) & x;

	*p1 = 100;
	int y = x;
	cout << *p1 << endl;
	cout << x << endl;
}

int main()
{
	//Test1();
	//Test2();
	Test3();

	return 0;
}