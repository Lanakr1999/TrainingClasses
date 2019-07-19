#include "Circle.h"
#include <iostream>


Circle::Circle()
{
}

Circle::Circle(std::string name) 
	: Figure(name)
{
	std::cout << "Circle " << name << " created" << std::endl;
}

Circle::~Circle()
{
	std::cout << "Circle " << name() << " deleted " << std::endl;
}