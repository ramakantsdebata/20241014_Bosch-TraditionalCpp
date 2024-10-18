#include <iostream>
#include <sstream>
#include "Birds.h"
using namespace std;

// Bird /////////////////////////////////////
Bird::Bird(const char* color, int weight)
{
	cout << "Bird::Bird()" << endl;
	m_Color = color;
	m_Weight = weight;
}

void Bird::fly()
{
	cout << "Flying..." << endl;
}

void Bird::speak()
{
	cout << "Speaking..." << endl;
}

std::string Bird::display()
{
	stringstream ss;
	ss << m_Color << ", " << m_Weight;
	return ss.str();
}

Bird::~Bird()
{
	cout << "Bird::~Bird" << endl;
}

// Lark ////////////////////////////////////
Lark::Lark(const char* color, int weight, const char* zone):
	Bird(color, weight),
	m_Zone(zone)
{
	cout << "Lark::Lark()" << endl;
}

void Lark::buildNest()
{
	cout << "Building nest on tree" << endl;
}

void Lark::fly()
{
	Bird::fly();
	cout << "Flying off to nearby tree" << endl;
}

void Lark::speak()
{
	cout << "Chriping..." << endl;
}

std::string Lark::display()
{
	stringstream ss;
	ss << Bird::display() << ", " << m_Zone;
	return ss.str();
}

Lark::~Lark()
{
	cout << "Lark::~Lark" << endl;
}


///////////////////////////////////////////////////////////////////


Penguin::Penguin(const char* color, int weight, const char* type) : Bird(color, weight), m_Type(type)
{}

void Penguin::speak()
{
	cout << "Screech" << endl;
}

void Penguin::fly()
{
	throw std::runtime_error("Penguins can't fly!");
}