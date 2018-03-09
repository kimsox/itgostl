// 정적함수 포인터

#include "stdafx.h"
#include <iostream>

using namespace std;

// 전역함수
void Output(int n)
{
	cout << "전역함수 : " << n << endl;
}

// namespace 내의 함수
namespace AA
{
	void Output(int n)
	{
		cout << "namespace AA의 전역함수 : " << n << endl;
	}
}

class Point
{
public:
	// static 멤버함수
	static void Output(int n)
	{
		cout << "Point 클래스 내의 정적멤버함수 : " << n << endl;
	}
};

int main()
{
	void(*pf) (int);		// 정적함수포인터 선언

	Output(100);
	AA::Output(200);
	Point::Output(300);

	cout << endl;

	pf = Output;
	pf(100);				// 함수포인터로 namespace가 없는 전역함수를 호출

	pf = AA::Output;
	pf(200);				// 함수포인터로 namespace AA의 전역함수를 호출

	pf = Point::Output;
	pf(300);				// 함수포인터로 Point 클래스의 정적 멤버함수를 호출

	return 0;
}