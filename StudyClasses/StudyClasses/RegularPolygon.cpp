#include "RegularPolygon.h"
#include <iostream>


RegularPolygon::RegularPolygon()
{
}

RegularPolygon::RegularPolygon(std::string name)
	: Figure(name)
{
	std::cout << "RegularPolygon " << name << " created" << std::endl;
}

void RegularPolygon::print() const
{
	std::cout << "RegularPolygon name " << name() << std::endl;
}

RegularPolygon::~RegularPolygon()
{
	std::cout << "RegularPolygon " << name() << " deleted " << std::endl;
}