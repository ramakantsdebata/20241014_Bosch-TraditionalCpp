#include <iostream>
using namespace std;


int* fnSquare1(int num)
{
	//int square = num * num;  // <-- as data is on stack, returning this by addr/ref leads to undefined behaviour
	static int square = num * num;
	return &square;
}

int& fnSquare2(int num)
{
	static int square;
	cout << "Square: " << square << endl;
	square = num * num;
	return square;
}

int& SomeFn(int& num)
{
	return num;
}

int main()
{
	int* res1 = fnSquare1(10);
	cout << *res1 << endl;

	int& res2 = fnSquare2(10);
	cout << res2 << endl;

	fnSquare2(10) = 999;
	fnSquare2(1);

	int x = 10;
	SomeFn(x) = 100;

	return 0;
}