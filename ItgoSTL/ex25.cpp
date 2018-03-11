// ��ü�� ����Լ� ȣ��, ����ü�� �ּҷ� ��� �Լ� ȣ��
/*
	�Ϲ����� �Լ� ������ void Print(int n)	---> void(*pf) (int)
		
	����Լ� ������ ��> void Point::Print(int n)		---> void(PointLL*pf) (int)

	����Լ��� ȣ�� ����� ���� ȣ�� ����� ���̰� �ִ�.

		- ��ü�� ����Լ��� ȣ�� .*�����ڸ��� ����Ѵ�. ��... (��ü.*pf) (100)

		- �ּҷ� ����Լ��� ȣ���ϴ� ��쿡�� ->*�����ڸ� ����Ѵ�. ��..... (�ּ�->*pf) (100)

*/

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
		x = 0, y = 0;
	}

	Point(int intX, int intY)
	{
		x = intX, y = intY;
	}

	void Print() const
	{
		cout << x << ", " << y << endl;
	}

	void PrintInt(int n)
	{
		cout << "���� : " << n << endl;
	}
};

int main()
{
	Point pt(4, 5);
	Point *p = &pt;

	void (Point::*pf1) () const;	// ����Լ� ������ ����
	pf1 = &Point::Print;

	void (Point::*pf2) (int);		// ����Լ� ������ ����
	pf2 = &Point::PrintInt;

	(pt.*pf1)();					// ��ü�� ����Լ� �����͸� �̿��� ȣ��
	(p->*pf1)();					// �ּҷ� ����Լ� �����͸� �̿��� ȣ��
	(pt.*pf2)(150);
	(p->*pf2)(100);

	return 0;
}



