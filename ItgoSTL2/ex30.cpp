// �Լ� ��ü(�Լ���, functor) : �Լ�ó�� �����ϴ� ��ü (�Լ�ó�� ȣ�� ������ Ŭ���� ��ü)

// ��ü�� �Լ�ó�� �����Ϸ��� '()' �����ڸ� �����ؾ��Ѵ�.
// --> '()' �����ڸ� �����ε� �ؾ��Ѵ�.

#include "stdafx.h"
#include <iostream>

using namespace std;

void Output()
{
	cout << "���� �Լ� !!" << endl;
}

struct FuncObj
{
	void operator() ()
	{
		cout << "�Լ� ��ü !!!" << endl;
	}
};

int main()
{
	FuncObj funcObj;

	Output();
	funcObj();		// ����Լ� ȣ��� ����! --> funcObj.operator() �� ����.


	return 0;
}