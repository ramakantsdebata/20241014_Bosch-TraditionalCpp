#include <iostream>
#include <string>
using namespace std;


class Employee
{
	const int m_id;
	string m_name;

public:
	Employee(int id, const char* name): m_id(id), m_name(name)
	{
		//m_id = id;				// Mandatory : member initialiser list
		//m_name = string(name);	// Optional : can be in either place
	}
	friend ostream& operator<<(ostream& out, const Employee& emp);
};

ostream& operator<<(ostream& out, const Employee& emp)
{
	out << emp.m_id << "--" << emp.m_name << endl;
	return out;
}

int main()
{
	const int x = 10;
	cout << x << endl;

	//const int y;
	//y = 20;
	//cout << y << endl;

	Employee e1(1, "Abhijeet");
	cout << e1 << endl;


	//int z = 10;
	int z(10);		// pseudo-constructor
	int p(z);		// pseudo-copy-constructor
}