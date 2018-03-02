// const 멤버 함수와 비 const 멤버 함수

// const 멤버 함수 : 멤버 함수 내에서 객체의 멤버 변수를 변경하지 않는다는 것을 보장하는 함수
// 따라서 const 객체는  const 멤버함수 만 호출할 수 있다.
// const 멤버 함수에서 멤버 변수를 변경할 경우에는 컴파일러 에러가 발생한다.


#include "stdafx.h"
#include <iostream>
using namespace std;

class Point2
{
private:
	int x;
	int y;

public:
	Point2(int _x = 0, int _y = 0)
		: x(_x), y(_y) {}

	int GetX() const { return x; }		// const 함수
	int GetY() const { return y; }		// const 함수

	void SetX(int _x) { x = _x; }		// 비 const 함수
	void SetY(int _y) { y = _y; }		// 비 const 함수

	void Print() const					// const 함수
	{
		cout << x << ", " << y << endl;
	}
};


int main()
{
	const Point2 p1(0, 0);				// const 객체 : 모든 멤버 변경 불가능
	Point2 p2(2, 3);					// 비 const 객체

	p1.Print();
	p2.Print();

	cout << "P1 : " << p1.GetX() << ", " << p1.GetY() << endl;
	cout << "P2 : " << p2.GetX() << ", " << p2.GetY() << endl;

	//p1.SetX(3);	// 에러발생!! const객체는 const 멤버함수만 호출가능
	//p1.SetY(10);	// 에러발생!! const객체는 const 멤버함수만 호출가능

	p2.SetX(3);		// 에러 없음
	p2.SetY(10);	// 에러 없음
	return 0;
}