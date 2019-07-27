#ifndef MAZE_H_
#define MAZE_H_

#include "MapSite.h"
#include "Room.h"

class Maze
{
public:
	Maze();

	void AddRoom(Room*);
	Room* RoomNO(int) const;

	void print() const;

private :
	//
};

#endif