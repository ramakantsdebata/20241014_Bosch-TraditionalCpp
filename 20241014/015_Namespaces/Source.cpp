#include <iostream>
#include "Header.h"
using namespace std;
	
static int x = 10;	// Internal linkage
int z = 30;			// Eternal linkage

namespace ToolSet
{
	class InternalClass
	{
		int data;
	};

	int variable;
}

namespace ToolSet
{
	float FloatVal;
}

namespace
// Enforces an internal linkage
{
	double DoubleData;
}

int main()
{
	int y = 20;		// No linkage
	cout << x << endl;

	Helper obj;
	obj.data = 45;
	cout << obj.data << endl;
	obj.display();

	Function();
	//Function(obj);

	//ToolSet::InternalClass obj2;
	//ToolSet::FloatVal = 1.0f;
	//using ToolSet::InternalClass;
	//InternalClass obj3;

	//using namespace ToolSet;
	//variable = 10;

	//DoubleData = 10.5;

	return 0;
}