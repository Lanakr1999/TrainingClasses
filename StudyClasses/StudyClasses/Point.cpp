#include "Point.h"

#include <iostream>

Point::Point()
{
}

Point::Point(float x, float y, float z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

Point::Point(std::string name)
{
	m_name = name;
	std::cout << "Point " << m_name << " created" << std::endl;
}

Point::~Point()
{
	std::cout << "Point " << m_name << " deleted" << std::endl;
}

float Point::x() const
{
	return m_x;
}

float Point::y() const
{
	return m_y;
}

float Point::z() const
{
	return m_z;
}

void Point::setX(float x)
{
	m_x = x;
}

void Point::setY(float y)
{
	m_y = y;
}

void Point::setZ(float z)
{
	m_z = z;
	auto p = distance();
}

float Point::distance() const
{
	return std::sqrt(m_z*m_z + m_y * m_y + m_z * m_z);
}

float Point::monhatanDistance() const
{
	return m_x+m_y+m_z;
}

void Point::print() const
{
	std::cout << "x = " << m_x << " y = " << m_y << " z = " << m_z << std::endl;
}
