#ifndef MAZEFACTORY_H_
#define MAZEFACTORY_H_

#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"

class MazeFactory
{
public:
	MazeFactory();


	virtual Maze* MakeMaze() const
	{ 
		return new Maze;
	}
	virtual Wall* MakeWalk() const
	{
	return new Wall;
	}
	virtual Room* MakeRoom(int n) const 
	{ 
		return new Room(n); 
	}
	virtual Door* MakeDoor (Room* rl, Room* r2) const
	{
		return new Door(rl, r2);
	}


};

#endif