#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>
using namespace std;

class MyClass
{
	int m_data;

public:
	MyClass()
	{
		cout << "MyClass()" << endl;
	}

	~MyClass()
	{
		cout << "~MyClass()" << endl;
	}

	void* operator new(size_t size)
	{
		cout << "Custom allocation. Allocating " << size << " bytes." << endl;
		void* p = malloc(size);
		if (p == NULL)
			throw bad_alloc();
		return p;
	}

	void operator delete(void* p)
	{
		cout << "Custom deletion" << endl;
		free(p);
	}
};

#endif  // MYCLASS_H
