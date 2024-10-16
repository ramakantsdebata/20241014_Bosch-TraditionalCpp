#ifndef CSTRING_H
#define CSTRING_H

class cString
{
	char* m_Str;
	//mutable int m_Len;
	int m_Len;

public:
	cString();
	cString(const char* str);
	~cString();

	// Non-constant functions
	void setString(const char* str);

	// Constant functions
	int getLen() const;
	char* getString() const;

private:
	// Helper functions
	void AllocateForStr(const char* str);
};

#endif  //CSTRING_H