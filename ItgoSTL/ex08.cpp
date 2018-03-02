// 전역 함수를 이용한 연산자 오버로딩

// 그동안 학습해 왔던 연산자 오버로딩은 "멤버함수를 이용한 연산자 오버로딩"

// 연산자 오버로딩에느 크게 2가지가 있다.

/* 1. 멤버함수 연산자 오버로딩
	
	class Point
	{
		.....
	};

	int main()
	{
		Point pt1(1,2), pt2(3,3);
		pt1 + pt2;		// pt1.operator+(pt2)

		return 0;
	}

	2. 전역함수 연산자 오버로딩
	class Point
	{
		...
	};

	const Point operator+(arg1, arg2)
	{
	//이런식으로 해야한다.
	}

	int main()
	{
		Point pt(1,2);

		operator(k + pt1);		
		// k는 연산자 오버로딩 객체가 아니므로 k.operator+(pt1) 처럼 호출이 불가능하다.
		// 따라서, operator+(k, pt1) 처럼 호출해야 한다.

		return 0;

*/


// 멤버함수를 이용한 오버로딩
//#include "stdafx.h"
//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//	int x; 
//	int y;
//
//public:
//	Point(int intX = 0, int intY = 0)
//		: x(intX), y(intY) {}
//
//public:
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//
//	const Point operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//};
//
//int main()
//{
//	Point p1(2, 3), p2(5, 5);
//	Point p3;
//
//	p3 = p1 - p2;
//	p3.Print();
//
//	return 0; 
//}

// 전역함수를 이용한 오버로딩