
// �Լ� ������ :	�Լ��� �ּҸ� �����ϴ� ����
//				�Լ��� ���� �ּҸ� �����ϴ� �޸� ������ �̸�

// �Լ��� �̸� : �Լ��� �����ּ�

// �Լ��� ������ : �Լ� �ñ״�ó (signature : �Լ��ǹ�ȯ Ÿ��, �Ű����� ����Ʈ)�� ���� �����Ѵ�.

/* ��>
	int func(int i, int j)

	------> �Լ� �����ͷ� �����ϸ� 

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