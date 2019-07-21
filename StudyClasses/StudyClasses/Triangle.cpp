#include "Triangle.h"
#include <iostream>


Triangle::Triangle()
{
}

Triangle::Triangle(std::string name)
	: Figure(name)
{
	std::cout << "Triangle " << name << " created" << std::endl;
}

void Triangle::print() const
{
	std::cout << "Triangle name " << name() << std::endl;
}


Triangle::~Triangle()
	
{
	std::cout << "Triangle " << name() << " deleted " << std::endl;
}
