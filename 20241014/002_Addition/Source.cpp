#include <iostream>  // Header file
using namespace std;


// Simple Add Function
/*
int add(int a, int b)
{
	return a + b;
}
*/


// Add Function
int add(int a, int b)
{
	int sum;
	sum = a + b;

	static int cumm_sum = 0;
	cumm_sum += sum;
	cout << cumm_sum << endl;
	return sum;
}


int main()
{
	int p = 10;
	int q = 20;

	int result;
	result = add(p, q);
	cout << "Sum --> " << result << endl;

	add(1, 2);
	add(4, 3);
	add(50, 70);

	int data;
	extern int var;
	cout << var << endl;

	// some code
	data = var;

	// some code
	data = var;

	// some code
	data = var;

	// some code
	data = var;

	cout << data << endl;
	//extern int inexistent_var;
	//cout << inexistent_var << endl;

	return 0;
}