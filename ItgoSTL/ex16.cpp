// �޸� ���� ������ �����ε�

#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:
	Point(int _x = 0, int _y = 0)
		: x(_x), y(_y)
	{}

	void Print() const
	{
		cout << x << ", " << y << endl;
	}
};

class PointPtr
{
	Point *ptr;
public:
	PointPtr(Point *p) : ptr(p) {}
	~PointPtr()
	{
		delete ptr;
	}

	Point* operator->() const
	{
		return ptr;
	}

	Point& operator*() const
	{
		return *ptr;
	}
};

int main()
{
	Point* p1 = new Point(1, 2);	// �Ϲ� ������
	PointPtr p2 = new Point(3, 3);	// ����Ʈ ������

	p1->Print();
	p2->Print();	// p2.operator->()
	cout << endl;

	(*p1).Print();	
	(*p2).Print();	// p2.operator*().Print() �� ����.

	delete p1;		// �������� �޸𸮿��� ���� ���� �ʱ� ������ �������� �����ؾ� �Ѵ�.
	// delete p2; ����� �ʿ� ����. ����Ʈ ������. �Ҹ��ڿ��� �ڵ����� ��������.

	return 0;
}