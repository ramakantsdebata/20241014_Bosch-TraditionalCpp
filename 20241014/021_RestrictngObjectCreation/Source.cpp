#include <iostream>
#include "MyClass.h"
using namespace std;


void Test1()
{
	//MyClass c1;						// On the Stack
	//MyClass* c2 = new MyClass;		// On the Heap



	// Only way to create objects if the constructor is private
	// and a static method is provide to generate the class object,
	// which will exclusively is creating an object on heap.
	/*MyClass* p = MyClass::CreateObject();
	delete p;*/


	// Only way to create objects, if the new operator is made private
	MyClass c3;
}

int main()
{
	Test1();

	return 0;
}