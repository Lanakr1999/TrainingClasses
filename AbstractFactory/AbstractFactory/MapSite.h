#ifndef MAPSITE_H_
#define MAPSITE_H_

enum Direction {North, South, East, West};

class MapSite
{
public:
	
	virtual void Enter() = 0;
};

#endif