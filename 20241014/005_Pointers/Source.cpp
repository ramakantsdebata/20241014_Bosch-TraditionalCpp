#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	char q = 'a';
	int* p1 = &x;
	p1 = (int*) &q;
	char* p2 = (char*)p1;

	cout << *p2 << endl;

	return 0;
}