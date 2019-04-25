#ifndef POINT00_H_
#define POINT00_H_

#include <string>

class Point
{
public:
	Point();

	Point(float x, float y, float z);

	Point(std::string name);

	~Point();

	float x() const;

	float y() const;

	float z() const;
	
	void setX(float x);

	void setY(float y);

	void setZ(float z);

	float distance() const;

	float monhatanDistance() const;

	void print() const;

private:
	float m_x = 0.0f;

	float m_y = 0.0f;

	float m_z = 0.0f;

	std::string m_name = "";
};

#endif