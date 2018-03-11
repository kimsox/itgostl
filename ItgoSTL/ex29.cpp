// STL의 for_each 알고리즘 사용하기

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Print1(int n) 
{
	cout << n << "  ";
}

void Print2(int n)
{
	cout << n * n << "  ";
}

void Print3(int n)
{
	cout << "정수 : " << n << endl;
}

int main()
{
	int arr[5] = { 10, 11, 12, 13, 14 };

	for_each(arr, arr + 5, Print1);		// Print1() 콜백함수의 주소를 전달

	cout << endl << endl;

	for_each(arr, arr + 5, Print2);

	cout << endl << endl;

	for_each(arr, arr + 5, Print3);

	return 0;
}