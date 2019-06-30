#include "Figure.h"
#include <iostream>

Figure::Figure()
{
}

Figure::Figure(std::string name)
{
	m_name = name;
	std::cout << "Point " << m_name << " created" << std::endl;
}

Figure::Figure(const Figure & other)
{
	m_name = other.name();
}

Figure & Figure::operator=(const Figure & other)
{
	m_name = other.name();
	return *this;
	// TODO: вставьте здесь оператор return
}

std::string Figure::name() const
{
	return m_name;
}

void Figure::setName(std::string x)
{
	x = m_name;
}

void Figure::print() const
{
	std::cout << "Figure name: " << m_name << std::endl;
}
