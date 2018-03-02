#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:
	//Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	Point();						// ����������
	Point(int intX, int intY);		// ���ڻ�����

	const Point& operator--()		// ����������
	{
		--x;
		--y;
		return *this;
	}

	const Point operator--(int)		// ����������
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