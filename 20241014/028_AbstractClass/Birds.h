#ifndef BIRDS_H
#define BIRDS_H
#include <string>
#include <iostream>

class Bird	//Abstract class
{
	std::string m_Color;
	int m_Weight;

public:
	Bird(const char* color, int weight);
	virtual void fly() = 0;  //Pure Virtual function
	virtual void speak();
	virtual std::string display();
	virtual ~Bird();
};

//////////////////////////////////////////////////////////////////////////////
class Lark : public Bird
{
	std::string m_Zone;

public:
	Lark(const char* color, int weight, const char* zone);
	virtual void buildNest();
	virtual void fly();
	virtual void speak();
	virtual std::string display();		// Override Bird::display()
	virtual ~Lark();
};

/////////////////////////////////////////////////////////////////////////////
class Penguin : public Bird
{
	std::string m_Type;

public:
	Penguin(const char* color, int weight, const char* type);
	virtual void speak();
	virtual void fly();
};


#endif  // BIRDS_H