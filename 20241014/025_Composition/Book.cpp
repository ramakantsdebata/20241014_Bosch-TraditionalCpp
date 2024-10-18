#include <iostream>
#include <sstream>
#include "Book.h"
#include "cString.h"

int Book::m_bkCounter = 0;

Book::Book(int id, const char* name, const cString* library) :m_id(id), m_name(name), m_pLibrary(library)
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
	return m_name.getString();
}

const cString* Book::getLibrary() const 
{
	return m_pLibrary;
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
	out << book.m_id << " --> " << book.m_name << " [" << *(book.m_pLibrary) << "]";
	return out;
}


Book::operator cString()
{
	std::stringstream ss;
	ss << "Book Details --> [ ID - " << m_id << ", Name - " << m_name << ", Library - " << *m_pLibrary << "]";
	return cString(ss.str().c_str());
}