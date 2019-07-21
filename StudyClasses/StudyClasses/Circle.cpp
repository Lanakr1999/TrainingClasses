#include "Circle.h"

#include <iostream>

Circle Circle::centre(0.0f, 0.0f, 0.0f);


Circle::Circle()
{
}

Circle::Circle(std::string name) 
	: Figure(name)
{
	std::cout << "Circle " << name << " created" << std::endl;
}

Circle::Circle(float x, float y, float z) : m_x(x), m_y(y), m_z(z)
{
}

Circle::~Circle()
{
	std::cout << "Circle " << name() << " deleted " << std::endl;
}

float Circle::R()
{
	return sqrt(m_x*m_x+m_y*m_y);
}

void Circle::setX(float x)
{
	m_x = x;
}

void Circle::setY(float y)
{
	m_y = y;
}

void Circle::setZ(float z)
{
	m_z = z;
}

void Circle::print() const
{
	std::cout << "Circle name " << name() << std::endl;
}
