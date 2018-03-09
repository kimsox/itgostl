// 함수 포인터 사용 예

#include "stdafx.h"
#include <iostream>

using namespace std;

void Output(int n)
{
	cout << "정수 : " << n << endl;
}

int main()
{
	// void Output(int n)의 함수포인터 선언
	void(*pf) (int);

	// 함수의 이름은 함수의 시작주소
	pf = Output;

	Output(100);	// 함수를 호출

	pf(200);		// 포인터를 이용한 함수 호출

	(*pf)(300);		// 포인터를 이용한 함수 호출

	cout << endl;
	cout << Output << endl;
	cout << pf << endl;
	cout << *pf << endl;		// *는 메모리 접근 연산자

	// 함수포인터에서는 *pf와 pf는 같은 의미이다.

	return 0;
}