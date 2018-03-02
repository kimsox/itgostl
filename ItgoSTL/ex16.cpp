// 메모리 접근 연산자 오버로딩

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
	Point* p1 = new Point(1, 2);	// 일반 포인터
	PointPtr p2 = new Point(3, 3);	// 스마트 포인터

	p1->Print();
	p2->Print();	// p2.operator->()
	cout << endl;

	(*p1).Print();	
	(*p2).Print();	// p2.operator*().Print() 와 같다.

	delete p1;		// 동적으로 메모리에서 제거 되지 않기 떄문에 수동으로 제거해야 한다.
	// delete p2; 명령은 필요 없다. 스마트 포인터. 소멸자에서 자동으로 삭제해줌.

	return 0;
}