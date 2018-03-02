// 배열 인덱스 연산자 오버로딩 ([] 연산자 오버로딩)

// 배열에 사용하는 []연산자를 객체에 사용하는 오버로딩

#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:
	Point()
	{
		x = 0; y = 0;
	}
	Point(int intX, int intY)
	{
		x = intX; y = intY;
	}

	void Print() const
	{
		cout << x << ", " << y << endl;
	}

	int operator[](int idx) const
	{
		if (idx == 0)
			return x;
		else if (idx == 1)
			return y;
		else
			throw "에러!!";
	}
};


int main()
{
	Point pt(3, 4);

	pt.Print();

	cout << pt.operator[] (0) << ", " << pt.operator[] (1) << endl;

	cout << endl;

	cout << pt[0] << ", " << pt[1] << endl;

	return 0;
}