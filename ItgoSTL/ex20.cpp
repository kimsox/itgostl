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

	cout << "ù���� i : " << i << endl;

	Point pt(1, 10);

	i = pt;		// pt.operator int()	�Ͻ��� ȣ��

	cout << "�ι�° i : "<< i << endl;

	pt.x = 100;

	cout << "����° i : " << i << endl;


	return 0;
}