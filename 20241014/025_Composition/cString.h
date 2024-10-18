#ifndef CSTRING_H
#define CSTRING_H
#include <iostream>

class cString
{
	char* m_Str;
	//mutable int m_Len;
	int m_Len;

public:
	cString();
	cString(const char* str);
	cString(const cString& obj);	// copy ctor
	~cString();

	// Non-constant functions
	void setString(const char* str);

	// Constant functions
	int getLen() const;
	char* getString() const;


	// Overloads
	char& operator[](int idx);
	const char& operator[](int idx) const;

private:
	// Helper functions
	void AllocateForStr(const char* str);


	friend std::ostream& operator<<(std::ostream& out, const cString& str);
};

std::ostream& operator<<(std::ostream& out, const cString& str);
#endif  //CSTRING_H