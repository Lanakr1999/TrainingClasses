#include "Door.h"
#include <iostream>

Door::Door(Room *, Room *)
{
}

void Door::Enter()
{
}

Room * Door::OtherSideFrom(Room *)
{
	return nullptr;
}

void Door::print() const
{
	std::cout << "Door" << std::endl;
}
