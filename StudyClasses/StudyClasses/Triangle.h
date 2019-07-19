#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle();

	Triangle(std::string name);

	~Triangle();
};

#endif