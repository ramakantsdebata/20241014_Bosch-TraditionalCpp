#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}

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


int (*op)(int, int);

//typedef int (*fnPtr)(int, int);



int main()
{
	cout << "Enter a choice: ";
	int ch;
	cin >> ch;

	//fnPtr op;
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
	}
	int res = op(30, 20);
	cout << "Res: " << res << endl;
	return 0;
}