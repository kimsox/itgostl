#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
public:
	int x;
	int y;

public:
	Point(int intX, int intY)
	{
		x = intX;
		y = intY;
	}

	void Print() const
	{
		cout << x << ", " << y << endl;
	}

	operator int() const
	{
		return x;
	}
};

int main()
{
	int i = 100;

	cout << "첫번쩨 i : " << i << endl;

	Point pt(1, 10);

	i = pt;		// pt.operator int()	암시적 호출

	cout << "두번째 i : "<< i << endl;

	pt.x = 100;

	cout << "세번째 i : " << i << endl;


	return 0;
}