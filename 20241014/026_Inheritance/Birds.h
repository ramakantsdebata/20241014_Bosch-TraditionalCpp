#ifndef BIRDS_H
#define BIRDS_H
#include <string>
#include <iostream>

class Bird
{
	std::string m_Color;
	int m_Weight;

public:
	Bird();
	Bird(const char* color, int weight);
	void fly();
	void speak();
	std::string display();
};

//////////////////////////////////////////////////////////////////////////////
class Lark : public Bird
{
	std::string m_Zone;

public:
	void buildNest();
	std::string display();		// Override Bird::display()
};

#endif  // BIRDS_H