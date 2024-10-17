#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>

namespace
{
	class Helper
	{
	public:
		int data;
		void display();
	};

	void Helper::display()
	{
		std::cout << "Data --> " << data << std::endl;
	}
}

void Function();
//void Function(Helper);


#endif  //TOOLS_H