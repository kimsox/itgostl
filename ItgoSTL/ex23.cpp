// C++ ���� �Լ��� �����Լ��� ����Լ��� ���� �� �ִ�.

/*
	�����Լ� : �����Լ�, namespace ���� �����Լ�, static �Լ�

	�Լ��� ȣ��
	- ���� �Լ� ȣ�� (�����Լ�)
	- ��ü�� ����Լ� ȣ��(����Լ�_
	- ��ü�� �ּҷ� ����Լ� ȣ��(����Լ�)
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

// �����Լ� (�����Լ�)
void Output()
{
	cout << "���� �Լ� Output() " << endl;
}

class Point
{
public:
	void Output()
	{
		cout << "����Լ� Output() " << endl;
	}
};

int main()
{
	Point pt;
	Point *p = &pt;

	Output();		// �����Լ� ȣ��
	pt.Output();	// ��ü�� ����Լ��� ȣ��
	p->Output();	// �ּҷ� ����Լ� ȣ��


	return 0;
}