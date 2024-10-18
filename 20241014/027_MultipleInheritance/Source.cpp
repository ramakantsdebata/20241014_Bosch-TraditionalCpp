#include <iostream>
using namespace std;

// Base Class
class A
{
public:
	int a_data;
	A() : a_data(10) {}
};

// Derived Class
class B : virtual public A
{
public:
	int b_data;
	B() : b_data(20) {}
};

// Derived Class
class C : virtual public A
{
public:
	int c_data;
	C() : c_data(30) {}
};

// Derived Class  --> Multilevel Inheritance
class D : public C
{
public:
	int d_data;
	D() : d_data(40) {}
};

// Derived Class  --> Multiple Inheritance
class E : public B, public D
{
public:
	int e_data;
	E() : e_data(50) {}

	void show()
	{
		cout << "A::a_data " << B::a_data << endl;
		cout << "A::a_data " << D::a_data << endl;
		B::a_data = 14;
		D::a_data = 17;
		cout << "A::a_data " << B::a_data << endl;
		cout << "A::a_data " << D::a_data << endl;
		cout << "B::b_data " << b_data << endl;
		cout << "C::c_data " << c_data << endl;
		cout << "D::d_data " << d_data << endl;
		cout << "E::e_data " << e_data << endl;
	}
};


int main()
{
	E obj;
	obj.show();

	return 0;
}

