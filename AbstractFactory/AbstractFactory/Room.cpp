#include "Room.h"
#include<iostream>

Room::Room(int roonmNo)
{
}

MapSite * Room::GetSide(Direction const)
{
	return nullptr;
}

void Room::SetSide(Direction, MapSite *)
{
}

void Room::Enter()
{
}

void Room::print() const
{
	std::cout << "Room" << std::endl;
}
