#ifndef ROOM_H_
#define ROOM_H_

#include "MapSite.h"

class Room : public MapSite
{
public:
	Room(int roonmNo);

	MapSite* GetSide(Direction const);
	void SetSide(Direction, MapSite*);

	virtual void Enter();

	void print() const;

private:
	MapSite* _sides[4];
	int _rbomNumber;

};

#endif