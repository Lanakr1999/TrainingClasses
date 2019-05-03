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

std::string Figure::figure() const
{
	return m_name;
}

void Figure::setFigure(std::string x)
{
	x = m_name;
}

void Figure::print() const
{
	std::cout << "Figure name: " << m_name << std::endl;
}
