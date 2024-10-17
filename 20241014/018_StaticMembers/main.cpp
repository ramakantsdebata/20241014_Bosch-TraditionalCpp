#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
	//Book bk1, bk2;

	cout << Book::m_bkCounter << endl;
	//cout << bk1.getBookCount() << endl;

	Book bk1(1, "Pride and Prejudice");

	//cout << bk1.getBookCount() << endl;
	cout << Book::getBookCount() << endl;

	Book bk2(2, "Great Expectations");

	cout << bk1 << "\n" << bk2 << endl;

	cout << Book::getBookCount() << endl;
	cout << Book::getBookCount() << endl;

	bk1.Display();
}