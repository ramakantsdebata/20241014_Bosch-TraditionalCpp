#include <iostream>
using namespace std;

void Test1()
{
	int x = 10;
	char q = 'a';
	int* p1 = &x;
	p1 = (int*) &q;
	char* p2 = (char*)p1;

	cout << *p2 << endl;
}

// Pass by value, address and reference
// Reference
// L-Value vs. R-Value
// LHS  vs. RHS


//Pass by value
void Swap1(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

//Pass by address
void Swap2(int* a, int* b)
{
	int tmp;
	tmp = *a;		// tmp = p
	* a = *b;		// p = q
	* b = tmp;		// q = tmp

	// 1. Logic is isolated and doesn't need regression for every use
	// 2. Cost of recreation is avoided
	// 3. The transfomation is directly applied to the subject, if that is what we require.
	// 4. For objects with a rectricted no. of creations, one is not wasted on just passing by value.
}

//Pass by reference
void Swap3(int& a, int& b)
{
	int tmp;
	tmp = a;		// tmp = p
	a = b;			// p = q
	b = tmp;		// q = tmp
}

void Test2()
{
	int a = 10;
	int b = a;

	// L-value: Location value
	// R-value: Read value
	//10 = a; //Location info not available on the LHS
	int* p1 = &a;

	cout << p1 << endl;  // r-value of p1
	cout << &p1 << endl;  // l-value of p1

	cout << "p1: " << p1 << endl; // l-value of a
	cout << "&a: " << &a << endl;

	cout << "*p1: " << *p1 << endl;


	int& ref = a;		// Create a reference to 'a'
	cout << "ref: " << ref << endl;
	cout << "&ref: " << &ref << endl;
	// reference captures the l-value and the r-value of a variable

	int p = 10, q = 20;
	cout << "p: " << p << endl;
	cout << "q: " << q << endl;


	// Pass by value
	Swap1(p, q);
	cout << "p: " << p << endl;
	cout << "q: " << q << endl;

	//Pass by address
	Swap2(&p, &q);
	cout << "p: " << p << endl;
	cout << "q: " << q << endl;

	//Pass by reference
	p = 10;
	q = 20;
	Swap3(p, q);
	cout << "p: " << p << endl;
	cout << "q: " << q << endl;
}

int main()
{
	//Test1();
	Test2();
}