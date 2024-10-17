#include <iostream>
#include "MyClass.h"
using namespace std;


class Test
{
	int m_data;
};


void Test1()
{
	int* p1 = new int;
	delete p1;
	p1 = NULL;
	delete p1;

	int* p2 = new int[10];
	delete[] p2;


	int* p3 = new int;	// throws std::bad_alloc (exception) if any problem encountered during allocation

	/*

	void* operator new(size_t size)
	{
		void* ptr = malloc(size);

		if (ptr == NULL)
			throw std::bad_alloc();	// Throw te bad_alloc exception
		return ptr;
	}


	*/



	// No throw version
	int* p4 = new (std::nothrow) int;

	/*

	void* operator new(size_t size)
	{
		void* ptr = malloc(size);

		return ptr;
	}
	*/



	// Placement new
	char buff[sizeof(int)];		//Pre-allocated buffer
	int* p5 = new (buff) int(47);


	char buffer[sizeof(Test) * 10];
	int counter = 0;

	Test* p6 = new (buffer + counter++ * sizeof(Test)) Test;
	Test* p7 = new (buffer + counter++ * sizeof(Test)) Test;
	Test* p8 = new (buffer + counter++ * sizeof(Test)) Test;
	Test* p9 = new (buffer + counter++ * sizeof(Test)) Test;

	//delete (buffer)p6;
}

void Test2()
{
	//MyClass c1;
	//cout << sizeof(c1) << endl;

	//MyClass arr[10];
	//cout << sizeof(arr) << endl;

	//cout << &arr[0] << " " << & arr[1] << endl;

	MyClass c1;

	MyClass* ptr = new MyClass;
	cout << "Object created" << endl;
	delete ptr;
}

int main()
{
	Test2();

	return 0;
}