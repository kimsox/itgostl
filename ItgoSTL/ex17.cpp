// Ÿ�Ժ�ȯ ������ �����ε�

/*
	��뤸�� ���� �����ؼ� Ÿ�Ժ�ȯ �� �� �ִ� ���
	- �����ڸ� �̿��� Ÿ�Ժ�ȯ
	- Ÿ�Ժ�ȯ ������ �����ε��� �̿��� Ÿ�Ժ�ȯ
	
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

class A
{

};

class B
{
public:
	B()
	{
		cout << "B ���� ������" << endl;
	}
	// �����ڸ� �̿��� Ÿ�Ժ�ȯ
	B(A& _a)
	{
		cout << "B(A _a) ������" << endl;
	}
	B(int i)
	{
		cout << "B(int i) ������" << endl;
	}
	B(double d)
	{
		cout << "B(double d) ������" << endl;
	}
};

int main()
{
	A a;
	int i = 100;
	double d = 5.4;

	B b;
	// A Ÿ���� ��ü�� B Ÿ������ ��ȯ
	b = a;	// b = B(a);	�Ͻ��� ������ ȣ�� �Ŀ� ����
	// ������ Ÿ���� B Ÿ������ ��ȯ
	b = i;	// b = B(i);	�Ͻ��� ������ ȣ�� �Ŀ� ����
	// double �� Ÿ���� B Ÿ������ ��ȯ
	b = d;	// b = B(d);	�Ͻ��� ������ ȣ�� �Ŀ� ����

	return 0;
}