#ifndef ORIENTEDRECTANGLE_H_
#define ORIENTEDRECTANGLE_H_

#include "Figure.h"

class OrientedRectangle : public Figure
{
public:
	OrientedRectangle();

	OrientedRectangle(std::string name);

	~OrientedRectangle();
};

#endif