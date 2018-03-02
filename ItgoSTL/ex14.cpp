// 메모리접근 연산자 오버로딩, 클래스 멤버 접근 연산자 오버로딩 (*, &, ->)

// 일반 포인터 사용

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
};

int main()
{
	Point *p1 = new Point(2, 3);
	Point *p2 = new Point(4, 4);

	p1->Print();		// p1의 멤버함수 호출
	p2->Print();		// p2의 멤버함수 호출

	delete p1, p2;		// 메모리 제거

	return 0;
}