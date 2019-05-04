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

Point Point::operator+(const Point & p) const
{
	Point sum;
	sum.m_x = m_x + p.m_x;
	sum.m_y = m_y + p.m_y;
	sum.m_z = m_z + p.m_z;
	return sum;
}

Point Point::operator-(const Point & t) const
{
	Point result;
	result.m_x = m_x - t.m_x;
	result.m_y = m_y - t.m_y;
	result.m_z = m_z - t.m_z;
	return result;
}

Point Point::operator*(const float & t) const
{
	Point mult;
	mult.m_x = m_x * t;
	mult.m_y = m_y * t;
	mult.m_z = m_z * t;
	return mult;
}

Point Point::operator/(const float & t) const
{
	Point div;
	div.m_x = m_x / t;
	div.m_y = m_y / t;
	div.m_z = m_z / t;
	return div;
}

bool Point::operator==(const Point & p) const
{
	return (m_x == p.m_x) && (m_y == p.m_y) && (m_z == p.m_z);
}
