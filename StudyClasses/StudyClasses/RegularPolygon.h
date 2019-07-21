#ifndef REGULARPOLYGON_H_
#define REGULARPOLYGON_H_

#include "Figure.h"

class RegularPolygon : public Figure
{
public:
	RegularPolygon();

	RegularPolygon(std::string name);

	void print() const override;

	~RegularPolygon();
};

#endif