
// 함수 포인터 :	함수의 주소를 저장하는 변수
//				함수의 시작 주소를 저장하는 메모리 공간의 이름

// 함수의 이름 : 함수가 시작주소

// 함수의 포인터 : 함수 시그니처 (signature : 함수의반환 타입, 매개변수 리스트)와 같게 선언한다.

/* 예>
	int func(int i, int j)

	------> 함수 포인터로 선언하면 

	int(*pf)(int, int)
*/


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int aa = 100;

	int *paa = &aa;

	cout << aa << endl;
	cout << &aa << endl;
	cout << paa << endl;
	cout << *paa << endl;

	return 0;
}