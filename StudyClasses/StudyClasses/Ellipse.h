#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include "Figure.h"

class Ellipse : public Figure
{
public:

	Ellipse();

	Ellipse(std::string name);

	void print() const override;

	~Ellipse();
};

#endif
