// �Լ� ������ ��� ��

#include "stdafx.h"
#include <iostream>

using namespace std;

void Output(int n)
{
	cout << "���� : " << n << endl;
}

int main()
{
	// void Output(int n)�� �Լ������� ����
	void(*pf) (int);

	// �Լ��� �̸��� �Լ��� �����ּ�
	pf = Output;

	Output(100);	// �Լ��� ȣ��

	pf(200);		// �����͸� �̿��� �Լ� ȣ��

	(*pf)(300);		// �����͸� �̿��� �Լ� ȣ��

	cout << endl;
	cout << Output << endl;
	cout << pf << endl;
	cout << *pf << endl;		// *�� �޸� ���� ������

	// �Լ������Ϳ����� *pf�� pf�� ���� �ǹ��̴�.

	return 0;
}