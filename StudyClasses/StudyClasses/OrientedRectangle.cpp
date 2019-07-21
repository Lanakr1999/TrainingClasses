#include "OrientedRectangle.h"
#include<iostream>



OrientedRectangle::OrientedRectangle()
{
}

OrientedRectangle::OrientedRectangle(std::string name)
	: Figure(name)
{
	std::cout << "OrientedRectangle " << name << " created" << std::endl;
}

void OrientedRectangle::print() const
{
	std::cout << "OrientedRectangle name " << name() << std::endl;
}


OrientedRectangle::~OrientedRectangle()
{
	std::cout << "OrientedRectangle " << name() << " deleted " << std::endl;
}
