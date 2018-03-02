// 연산자 오버로딩 : C++에서 제공하는 기본타입이 아닌 클래스 타입,
// 즉, 사용자 정의 타입에 연산자를 사용할 수 있도록 하는 문법

#include "stdafx.h"
#include <iostream>
using namespace std;

class Point
{
public:
	int x;
	int y;

public:
	// 생성자 : 객체를 생성할 때 자동적으로 호출되는 함수
	// 소멸자 : 객체가 소멸될 때 자동적으로 호출되는 함수
	Point(int _x = 0,int _y = 0)
		: x(_x), y(_y) {}
	void Print() const { cout << x << ", " << y << endl; }

	//void operator+(Point arg)
	//{
	//	cout << "operator+() 함수 호출" << endl;
	//}
	const Point operator+(const Point& arg)
	{
		Point pt;
		pt.x = this->x + arg.x;
		pt.y = this->y + arg.y;
		return pt;
	}
};



int main()
{
	//int n1 = 10, n2 = 20;

	//cout << n1 + n2 << endl;

	//return 0;
	Point p1(2, 3), p2(5, 5);

	//p1 + p2; // 컴파일러는 두 객체의 연산을 모르기 때문에 에러발생!!
	//p1 + p2;	// p1.operator+(p2); 와 같은 명령이다.
	
	Point pt3 = p1.operator+(p2);
	pt3.Print();


	return 0;
}