// 이항 연산산자 오버로딩

// 이항연산자 : +, -, *, /, ==, !=, <, <= 등

#include "stdafx.h"
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;

public:
	//원형 생성자
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int intX, int intY)
	{
		x = intX;
		y = intY;
	}

	void Print() const
	{
		cout << x << ", " << y << endl;
	}

	bool operator==(const Point& arg) const
	{
		return (x == arg.x && y == arg.y) ? true : false;
	}
};


int main()
{
	Point p1(2, 3), p2(5, 5), p3(2, 3);

	if (p1 == p3)	// pa.operator==(p2)와 같은 조건
		cout << "p1 == p2" << endl;

	if (p1.operator==(p3))
		cout << "p1 == p2" << endl;


	return 0;
}

