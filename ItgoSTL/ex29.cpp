// STL�� for_each �˰��� ����ϱ�

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
	cout << "���� : " << n << endl;
}

int main()
{
	int arr[5] = { 10, 11, 12, 13, 14 };

	for_each(arr, arr + 5, Print1);		// Print1() �ݹ��Լ��� �ּҸ� ����

	cout << endl << endl;

	for_each(arr, arr + 5, Print2);

	cout << endl << endl;

	for_each(arr, arr + 5, Print3);

	return 0;
}