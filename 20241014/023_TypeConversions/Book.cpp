#include <iostream>
#include <sstream>
#include "Book.h"
#include "cString.h"

int Book::m_bkCounter = 0;

Book::Book(int id, const char* name):m_id(id), m_name(name)
{
	m_bkCounter++;
}

void Book::Display()
{
	std::cout << "Book Details: " << m_id << " --> " << this->m_name << std::endl;
}

int Book::getId() const
{
	return m_id;
}

const char* Book::getName() const
{
	return m_name.c_str();
}

int Book::getBookCount()
{
	//Display();	
	// current function is static, and so doesn't have the 'this' pointer, which is required by the Display()
	 
	
	//std::cout << this->m_id << std::endl;		// Cannot access non-static members in a static method
	return m_bkCounter;		
	// Compiler deduces the type from the this pointer and accesses the attribute of that type.
}

Book::~Book()
{
	m_bkCounter--;
}

std::ostream& operator<<(std::ostream& out, const Book& book)
{
	out << book.m_id << " --> " << book.m_name;
	return out;
}


Book::operator cString()
{
	std::stringstream ss;
	ss << "Book Details --> [ ID - " << m_id << ", " << m_name << "]";
	return cString(ss.str().c_str());
}