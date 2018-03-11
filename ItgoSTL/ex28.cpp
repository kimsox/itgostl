// 함수포인터를 이용한 콜백 메커니즘 구현

#include "stdafx.h"
#include <iostream>

using namespace std;

// 서버

void For_each(int *begin, int *end, void (*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++);	// 클라이언트의 함수를 호출(콜백)
	}
}


// 클라이언트

void Output1(int n)
{
	cout << n << "  ";
}

void Output2(int n)
{
	cout << n * n << "  ";
}

void Output3(int n)
{
	cout << "정수 : " << n << endl;
}

int main()
{
	int arr[5] = { 100, 200, 300, 400, 500 };

	For_each(arr, arr + 5, Output1);		// Output1의 콜백함수의 주소가 전달
	cout << endl << endl;

	For_each(arr, arr + 5, Output2);
	cout << endl << endl;

	For_each(arr, arr + 5, Output3);


	return 0;
}