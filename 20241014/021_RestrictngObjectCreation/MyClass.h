#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>
using namespace std;

class MyClass
{
	void* operator new(size_t size)
	{
		cout << "Custom allocation. Allocating " << size << " bytes." << endl;
		void* p = malloc(size);
		if (p == NULL)
			throw bad_alloc();
		return p;
	}

public:
	MyClass()
	{
		cout << "MyClass()" << endl;
	}

	//static MyClass* CreateObject()
	//{
	//	return new MyClass();
	//}

	~MyClass()
	{
		cout << "~MyClass()" << endl;
	}

	void operator delete(void* p)
	{
		cout << "Custom deletion" << endl;
		free(p);
	}
};

#endif  // MYCLASS_H
