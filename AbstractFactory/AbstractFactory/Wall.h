#ifndef WALL_H_
#define WALL_H_

#include "MapSite.h"

class Wall : public MapSite

{
public:
	
	virtual void Enter();

	void print() const;

};

#endif