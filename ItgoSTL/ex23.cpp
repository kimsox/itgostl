// C++ 에서 함수는 정적함수와 멤버함수로 나눌 수 있다.

/*
	정적함수 : 전역함수, namespace 내의 전역함수, static 함수

	함수의 호출
	- 정적 함수 호출 (정적함수)
	- 객체로 멤버함수 호출(멤버함수_
	- 객체의 주소로 멤버함수 호출(멤버함수)
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

// 전역함수 (정적함수)
void Output()
{
	cout << "정적 함수 Output() " << endl;
}

class Point
{
public:
	void Output()
	{
		cout << "멤버함수 Output() " << endl;
	}
};

int main()
{
	Point pt;
	Point *p = &pt;

	Output();		// 정적함수 호출
	pt.Output();	// 객체로 멤버함수를 호출
	p->Output();	// 주소로 멤버함수 호출


	return 0;
}