#include <iostream>
#include <sstream>
#include "Birds.h"
using namespace std;

// Bird /////////////////////////////////////
Bird::Bird()
{}

Bird::Bird(const char* color, int weight)
{
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

// Lark ////////////////////////////////////
void Lark::buildNest()
{
	cout << "Building nest on tree" << endl;
}

std::string Lark::display()
{
	stringstream ss;
	ss << Bird::display() << ", " << m_Zone;
	return ss.str();
}
