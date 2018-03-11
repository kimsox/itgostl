// 객체로 멤버함수 호출, 개개체의 주소로 멤버 함수 호출
/*
	일반적인 함수 포인터 void Print(int n)	---> void(*pf) (int)
		
	멤버함수 포인터 예> void Point::Print(int n)		---> void(PointLL*pf) (int)

	멤버함수의 호출 방법에 따라 호출 방식의 차이가 있다.

		- 객체로 멤버함수를 호출 .*연산자르르 사용한다. 예... (객체.*pf) (100)

		- 주소로 멤버함수를 호출하는 경우에는 ->*연산자를 사용한다. 예..... (주소->*pf) (100)

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
		cout << "정수 : " << n << endl;
	}
};

int main()
{
	Point pt(4, 5);
	Point *p = &pt;

	void (Point::*pf1) () const;	// 멤버함수 포인터 선언
	pf1 = &Point::Print;

	void (Point::*pf2) (int);		// 멤버함수 포인터 선언
	pf2 = &Point::PrintInt;

	(pt.*pf1)();					// 객체로 멤버함수 포인터를 이용한 호출
	(p->*pf1)();					// 주소로 멤버함수 포인터를 이용한 호출
	(pt.*pf2)(150);
	(p->*pf2)(100);

	return 0;
}



