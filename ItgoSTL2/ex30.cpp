// 함수 객체(함수자, functor) : 함수처럼 동작하는 객체 (함수처럼 호출 가능한 클래스 객체)

// 객체가 함수처럼 동작하려면 '()' 연산자를 정의해야한다.
// --> '()' 여산자를 오버로딩 해야한다.

#include "stdafx.h"
#include <iostream>

using namespace std;

void Output()
{
	cout << "전역 함수 !!" << endl;
}

struct FuncObj
{
	void operator() ()
	{
		cout << "함수 객체 !!!" << endl;
	}
};

int main()
{
	FuncObj funcObj;

	Output();
	funcObj();		// 멤버함수 호출과 같다! --> funcObj.operator() 와 같다.


	return 0;
}