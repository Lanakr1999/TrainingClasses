#include "ClosedPolyline.h"
#include<iostream>


ClosedPolyline::ClosedPolyline()
{
}

ClosedPolyline::ClosedPolyline(std::string name)
	: Figure(name)
{
	std::cout << "ClosedPolyline " << name << " created" << std::endl;
}

void ClosedPolyline::print() const
{
	std::cout << "ClosedPolyline name " << name() << std::endl;
}


ClosedPolyline::~ClosedPolyline()
{
	std::cout << "ClosedPolyline " << name() << " deleted " << std::endl;
}
