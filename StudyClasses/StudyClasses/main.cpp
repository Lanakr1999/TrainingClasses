#include "Point.h"
#include "Figure.h"
#include "Circle.h"
#include "ClosedPolyline.h"
#include "Ellipse.h"
#include "OrientedRectangle.h"
#include "RegularPolygon.h"
#include "Triangle.h"

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
		
	Figure FIGURES[10] = {
		Figure("0"),
		Figure("1"),
	    Figure("2"),
	    Figure("3"),
	    Figure("4"),
	    Figure("5"),
	    Figure("6"),
	    Figure("7"),
	    Figure("8"),
	    Figure("9")
	};
	int prnt;
	int num = 10;
	for (prnt = 0; prnt < num; prnt++)
	{
		FIGURES[prnt].print();
	}
	std::cout << std::endl;
	Point p10(1.1f, 1.1f, 1.1f);
	p10.print();
	Point p11(1.0f, 1.0f, 1.9f);
	p11.print();
	Point pSum = p10 + p11;
	pSum.print();
	Point pRes = p10 - p11;
	pRes.print();
	Point pMult = p10 * 2.0f;
	pMult.print();
	Point pDiv = p10 / 2.0f;
	pDiv.print();
	Point p12(1.1f, 1.1f, 1.1f);
	std::cout << "p12 == p10 = " << (p12 == p10) << std::endl;
	std::cout << "p12 == p11 = " << (p12 == p11) << std::endl;
	std::cout << "p12 > p11 = " << (p12 > p11) << std::endl;
	Point p13(1.0f, 1.0f, 3.0f);
	float s = p13 * 5.0f;
	std::cout << "Point s = p13 * 5 = " << s << std::endl;
	//Point pTemp = 5.12f; // impossible for explicit constructors
	Point p14(5.12f);
	Point p15 = Point(std::string("aaa"));
	p14.print();

	Point p16 = Point::center;
	p16.print();

	Point::zeroPoint().print();

	std::cout << std::endl << std::endl << std::endl;
	Point p21(2.0f, 2.2f, 2.0f);
	p21.print();
	Point p22 = p21;
	p22.print();
	Point p23(0.1f, 0.2f, 0.3f);
	p23 = p22;
	p23.print();
	Point p24(p23);
	
	{
		std::cout << "\n\n";
		Circle circle("circle");
		circle.print();
		ClosedPolyline closedPolyline("closedPolyline");
		closedPolyline.print();
		Ellipse ellipse("ellipse");
		ellipse.print();
		OrientedRectangle orientedRectangle("orientedRectangle");
		orientedRectangle.print();
		RegularPolygon regularPolygon("regularPolygon");
		regularPolygon.print();
		Triangle triangle("triangle");
		triangle.print();
	}

	int a;
	std::cin >> a;

	return 0;
}