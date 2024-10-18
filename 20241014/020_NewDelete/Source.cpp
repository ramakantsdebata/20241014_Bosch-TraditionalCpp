#include <iostream>
#include "MyClass.h"
using namespace std;


class Test
{
	int m_data;
public:
	Test(int val): m_data(val)
	{
		cout << "Test()" << endl;
	}

	~Test()
	{
		// Clean up operations
		cout << "~Test()" << endl;
	}
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

	Test t1(1), t2(2);

	Test* p6 = new (buffer + counter++ * sizeof(Test)) Test(1);
	Test* p7 = new (buffer + counter++ * sizeof(Test)) Test(2);
	Test* p8 = new (buffer + counter++ * sizeof(Test)) Test(3);
	Test* p9 = new (buffer + counter++ * sizeof(Test)) Test(4);

	//delete (buffer)p6;

	p6->~Test();
	p7->~Test();
	p8->~Test();
	p9->~Test();

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
	Test1();

	return 0;
}