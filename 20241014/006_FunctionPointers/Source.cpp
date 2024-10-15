#include <iostream>
using namespace std;

int add(int, int);

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int divd(int a, int b)
{
	return a/b;
}


//int (*op)(int, int);

typedef int (*fnPtr)(int, int);

void Test1()
{
	cout << "Enter a choice: ";
	int ch;
	cin >> ch;

	fnPtr op;
	switch (ch)
	{
	case 1:
		op = &add;
		break;
	case 2:
		op = &sub;
		break;
	case 3:
		op = &mul;
		break;
	case 4:
		op = &divd;
		break;
	default:
		op = NULL;
	}
	if (op != NULL)
	{
		int res = op(30, 20);
		cout << "Res: " << res << endl;
	}
	else
		cout << "No operation selected" << endl;
}

int add(int a, int b)
{
	return a + b;
}

// Test2 ////////////////////////////////////////////////////////////////

// Array of func pointers
int (*fnPtrArr[4])(int, int);  // <-- Array of fn ptrs; We are not going to use it below

void Test2()
{
	cout << "Enter a choice: ";
	int ch;
	cin >> ch;

	if (ch < 0 || ch > 3)
	{
		cout << "Invalid choice." << endl;
		return;
	}

	fnPtr op[4];
	op[0] = &add;
	op[1] = &sub;
	op[2] = &mul;
	op[3] = &divd;

	int res = op[ch](30, 20);
	cout << "Res: " << res << endl;
}


// Main ////////////////////////////////////////////////////////////////

int main()
{
	//Test1();
	Test2();

	return 0;
}