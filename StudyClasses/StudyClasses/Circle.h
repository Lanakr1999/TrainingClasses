#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Figure.h"

class Circle : public Figure
{
public:

	Circle();

	Circle(std::string name);

	Circle(float x, float y, float z);

	~Circle();

	float R();

	void setX(float x);

	void setY(float y);

	void setZ(float z);

	void print() const override;

	static Circle centre;

private:

	float m_x = 0.0f;

	float m_y = 0.0f;

	float m_z = 0.0f;

};

#endif