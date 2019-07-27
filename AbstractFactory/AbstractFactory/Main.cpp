#include "Door.h"
#include "MapSite.h"
#include "Maze.h"
#include "MazeFactory.h"
#include "Room.h"
#include "Wall.h"

#include <iostream>

int main(MazeFactory& factory)
{
	Maze* aMaze = new Maze;
	Room* r1 = new Room(1);
	Room* r2 = new Room(2);
	Door* theDoor = new Door(r1, r2);

	Maze* aMaze2 = factory.MakeMaze();
	Room* r3 = factory.MakeRoom(1);
	Room* r4 = factory.MakeRoom(2);
	Door* aDoor = factory.MakeDoor(r1, r2);

	int a;
	std::cin >> a;
	return 1;

}