#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

class Book
{
	int m_id;
	std::string m_name;

public:
	static int m_bkCounter;
	Book(int id, const char* name);
	~Book();

	void Display();
	static int getBookCount();


	friend std::ostream& operator<<(std::ostream& out, const Book& book);
};

std::ostream& operator<<(std::ostream& out, const Book& book);

#endif //BOOK_H