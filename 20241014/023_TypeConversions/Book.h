#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

class cString;

class Book
{
	int m_id;
	std::string m_name;
	static int m_bkCounter;

public:
	Book(int id, const char* name);
	~Book();

	int getId() const;
	const char* getName() const;
	void Display();
	static int getBookCount();

	operator cString();

	friend std::ostream& operator<<(std::ostream& out, const Book& book);
};

std::ostream& operator<<(std::ostream& out, const Book& book);

#endif //BOOK_H