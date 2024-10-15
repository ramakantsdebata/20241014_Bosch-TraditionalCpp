#include <iostream>
using namespace std;

int main()
{

	//int* ptr = (int*)malloc(sizeof(int));
	//int* ptr = new int;
	int* ptr = new int(99);
	delete ptr;

	//*ptr = 10;
	cout << *ptr << endl;


	int* ptr2 = new int[10];
	ptr2[5] = 60;
	delete[] ptr2;

	return 0;
}