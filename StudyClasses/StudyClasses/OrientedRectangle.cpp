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


OrientedRectangle::~OrientedRectangle()
{
	std::cout << "OrientedRectangle " << name() << " deleted " << std::endl;
}
