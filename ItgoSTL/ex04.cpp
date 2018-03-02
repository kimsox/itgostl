// 단항 연산자 오버로딩

// 단항 연산자 : !, &, ~, |, +, -, *, ++, -- 등등~~

// ++, --와 관련된 컴파일러와 약속된 함수 operator++(), operator++(int)

#include "stdafx.h"
#include <iostream>
using namespace std;


class Point
{
private:
	int x, y;

public:
	Point(int _x = 0, int _y = 0)
		: x(_x), y(_y) {}
	void Print() const { cout << x << ", " << y << endl; }

	const Point& operator++()		// 전위 연산 ++p1
	{
		++x;
		++y;
		return *this;
	}

	const Point operator++(int)	// 후위 연산 p1++
	{
		Point pt(x, y);
		++pt.x;
		++pt.y;
		return pt;
	}
};

int main()
{
	Point p1(2, 3), p2(3, 5);
	Point result;

	result = ++p1;	// p1.operator++()를 호출한 것과 같다.
	result.Print();

	result = p2++;	// p2.operator(0)를 호출한 것과 같다.
	result.Print();

	return 0;
}