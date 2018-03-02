#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:
	//Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	Point();						// 원형생성자
	Point(int intX, int intY);		// 인자생성자

	const Point& operator--()		// 전위연산자
	{
		--x;
		--y;
		return *this;
	}

	const Point operator--(int)		// 후위연산자
	{
		Point pt(x, y);
		--x;
		--y;
		return pt;
	}


};


Point::Point()
{
	x = 0; y = 0;
}