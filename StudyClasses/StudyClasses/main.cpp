#include "Point.h"

#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main()
{
	Point p1;
	p1.print();
	
	Point p2 = Point(1.0f, 1.0f, 1.0f);
	p2.print();

	Point p3(2.0f, 2.0f, 2.0f);
	p3.print();

	/*
	// memory leak
	while (true)
	{
		Point *p4 = new Point("p");
		p4->print();
		//delete p4;
		std::this_thread::sleep_for(0.05s);
	}
	*/

	Point *p4 = new Point(4.0f, 4.0f, 4.0f);
	p4->print();
	delete p4;

	{
		Point p5("p5");
	}

	const int POINTS = 10;
	Point points[POINTS];
	int pnt;
	for (pnt = 0; pnt < POINTS; pnt++)
	{
		points[pnt].setX(1.2f);
		points[pnt].setY(1.23f);
		points[pnt].setZ(2.123f);
	}
		
		
	

	int a;
	std::cin >> a;

	return 0;
}