#include "Ellipse.h"
#include<iostream>


Ellipse::Ellipse()
{
}

Ellipse::Ellipse(std::string name)
	: Figure(name)
{
	std::cout << "Ellipse " << name << " created" << std::endl;
}

void Ellipse::print() const
{
	std::cout << "Ellipse name " << name() << std::endl;
}


Ellipse::~Ellipse()
{
	std::cout << "Ellipse " << name() << " deleted " << std::endl;
}
