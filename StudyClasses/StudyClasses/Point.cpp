#include "Point.h"

#include <iostream>

Point Point::center(0.0f, 0.0f, 0.0f);

Point::Point()
{
}

Point::Point(float x, float y, float z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

Point::Point(const Point& other)
{
	std::cout << "Copy construct working" << std::endl;
	m_x = other.x();
	m_y = other.y();
	m_z = other.z();
}

Point& Point::operator=(const Point & other)
{
	std::cout << "Assignment operator working" << std::endl;
	m_x = other.x();
	m_y = other.y();
	m_z = other.z();
	return *this;
}

Point::Point(std::string name)
{
	m_name = name;
	std::cout << "Point " << m_name << " created" << std::endl;
}

Point::Point(float value)
{
	m_x = value;
	m_y = value;
	m_z = value;
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

Point Point::operator-(const Point & p) const
{
	Point result;
	result.m_x = m_x - p.m_x;
	result.m_y = m_y - p.m_y;
	result.m_z = m_z - p.m_z;
	return result;
}

Point Point::operator*(const float & p) const
{
	Point mult;
	mult.m_x = m_x * p;
	mult.m_y = m_y * p;
	mult.m_z = m_z * p;
	return mult;
}

Point Point::operator/(const float & p) const
{
	Point div;
	div.m_x = m_x / p;
	div.m_y = m_y / p;
	div.m_z = m_z / p;
	return div;
}

bool Point::operator==(const Point & p) const
{
	return (m_x == p.m_x) && (m_y == p.m_y) && (m_z == p.m_z);
}

bool Point::operator>(const Point & p) const
{
	return monhatanDistance() > p.monhatanDistance();
}

bool Point::operator<(const Point & p) const
{
	return monhatanDistance() < p.monhatanDistance();
}

bool Point::operator>=(const Point & p) const
{
	return monhatanDistance() >= p.monhatanDistance();
}

bool Point::operator<=(const Point & p) const
{
	return monhatanDistance() <= p.monhatanDistance();
}

Point::operator float() const
{
	return distance();
}

Point Point::zeroPoint()
{
	return Point(0.0f, 0.0f, 0.0f);
}

