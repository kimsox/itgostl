// �����Լ� ������

#include "stdafx.h"
#include <iostream>

using namespace std;

// �����Լ�
void Output(int n)
{
	cout << "�����Լ� : " << n << endl;
}

// namespace ���� �Լ�
namespace AA
{
	void Output(int n)
	{
		cout << "namespace AA�� �����Լ� : " << n << endl;
	}
}

class Point
{
public:
	// static ����Լ�
	static void Output(int n)
	{
		cout << "Point Ŭ���� ���� ��������Լ� : " << n << endl;
	}
};

int main()
{
	void(*pf) (int);		// �����Լ������� ����

	Output(100);
	AA::Output(200);
	Point::Output(300);

	cout << endl;

	pf = Output;
	pf(100);				// �Լ������ͷ� namespace�� ���� �����Լ��� ȣ��

	pf = AA::Output;
	pf(200);				// �Լ������ͷ� namespace AA�� �����Լ��� ȣ��

	pf = Point::Output;
	pf(300);				// �Լ������ͷ� Point Ŭ������ ���� ����Լ��� ȣ��

	return 0;
}