// �Լ������͸� �̿��� �ݹ� ��Ŀ���� ����

#include "stdafx.h"
#include <iostream>

using namespace std;

// ����

void For_each(int *begin, int *end, void (*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++);	// Ŭ���̾�Ʈ�� �Լ��� ȣ��(�ݹ�)
	}
}


// Ŭ���̾�Ʈ

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
	cout << "���� : " << n << endl;
}

int main()
{
	int arr[5] = { 100, 200, 300, 400, 500 };

	For_each(arr, arr + 5, Output1);		// Output1�� �ݹ��Լ��� �ּҰ� ����
	cout << endl << endl;

	For_each(arr, arr + 5, Output2);
	cout << endl << endl;

	For_each(arr, arr + 5, Output3);


	return 0;
}