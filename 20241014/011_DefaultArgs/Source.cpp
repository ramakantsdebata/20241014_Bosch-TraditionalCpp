#include <iostream>
using namespace std;

//#define MAX(a, b) (a > b ? a : b)

inline int Max(int a, int b)
{
	return (a > b ? a : b);
}

//int add(int a, int b)
//{
//	return a + b;
//}
//
//
//int add(int a, int b, int c)
//{
//	return a + b + c;
//}


int add(int a, int b, int d=0, int c=0)
{
	cout << a << ", " << b << ", " << c << ", " << d << endl;
	return a + b + c + d;
}

int main()
{
	cout << add(1, 2) << endl;
	cout << add(1, 2, 3) << endl;
	cout << add(1, 2, 3, 4) << endl;

	int max_val = Max(75, 65);
	cout << max_val << endl;

	return 0;
}