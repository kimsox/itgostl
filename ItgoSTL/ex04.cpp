// ���� ������ �����ε�

// ���� ������ : !, &, ~, |, +, -, *, ++, -- ���~~

// ++, --�� ���õ� �����Ϸ��� ��ӵ� �Լ� operator++(), operator++(int)

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

	const Point& operator++()		// ���� ���� ++p1
	{
		++x;
		++y;
		return *this;
	}

	const Point operator++(int)	// ���� ���� p1++
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

	result = ++p1;	// p1.operator++()�� ȣ���� �Ͱ� ����.
	result.Print();

	result = p2++;	// p2.operator(0)�� ȣ���� �Ͱ� ����.
	result.Print();

	return 0;
}