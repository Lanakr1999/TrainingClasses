#ifndef CLOSEDPOLYLINE_H_
#define CLOSEDPOLYLINE_H_

#include "Figure.h"

class ClosedPolyline : public Figure
{
public:

	ClosedPolyline();

	ClosedPolyline(std::string name);

	void print() const override;

	~ClosedPolyline();
};

#endif