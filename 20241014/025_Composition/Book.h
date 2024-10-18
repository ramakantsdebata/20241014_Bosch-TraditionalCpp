#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include "cString.h"

class Book
{
	int m_id;
	cString m_name;
	const cString* m_pLibrary;
	static int m_bkCounter;

public:
	Book(int id, const char* name, const cString* library);
	~Book();

	int getId() const;
	const char* getName() const;
	const cString* getLibrary() const;
	void Display();
	static int getBookCount();

	operator cString();

	friend std::ostream& operator<<(std::ostream& out, const Book& book);
};

std::ostream& operator<<(std::ostream& out, const Book& book);

#endif //BOOK_H