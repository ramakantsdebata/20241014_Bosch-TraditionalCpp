#include <iostream>
#include <string.h>
#include "cString.h"

cString::cString()
{
	//m_Str = NULL;
	//m_Len = 0;

	AllocateForStr("");
}

cString::cString(const char* str)
{
	AllocateForStr(str);
}

void cString::AllocateForStr(const char* str)
{
	// Get the len of 'str' and set 'm_Len'
	m_Len = strlen(str);

	// Allocate requried space
	m_Str = new char[m_Len + 1];

	// Copy the data from 'str' to 'm_Str'
	//strcpy(m_Str, str);		// <-- Deprecated
	strcpy_s(m_Str, m_Len + 1, str);
}

int cString::getLen() const
{
	//m_Len += 1;		// <-- Not possible to modify non-mutable attributes
	return this->m_Len;
}

void cString::setString(const char* str)
{
	// Release any pre-existing allocation
	if (m_Str != NULL)
	{
		delete[] m_Str;
		this->m_Str = NULL;
	}


	AllocateForStr(str);
}

char* cString::getString() const
{
	return m_Str;
}

cString::~cString()
{
	if (m_Str != NULL)
		delete[] m_Str;
}