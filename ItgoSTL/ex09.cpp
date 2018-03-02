// STL ���α׷��� �־ �ʿ��� ������ �����ε�


/*
	-	�Լ� ȣ�� ������ �����ε� : ()������

		��ü�� �Լ�ó�� �����ϰ� �ϴ� ������

		��>
			Print(100) �� ������ ���� ������ ���� �ؼ��� �� �ִ�.

			1) Print�� �Լ� �̸��� ��쿡�� �Լ� ȣ��
			2) Print�� �Լ� �������� ��쿡�� �Լ�������
			3) Print�� ��ü�� ��쿡�� �Լ���ü

*/

#include "stdafx.h"
#include <iostream>

using namespace std;

struct FObject
{
public:
	void operator() (int arg) const
	{
		cout << "���� ��� : " << arg << endl;
	}
};

void Print1(int arg)
{
	cout << "���� ��� : " << arg << endl;
}

int main()
{
	void(*Print2)(int) = Print1;
	FObject Print3;

	Print1(100);		// �Լ� ȣ��
	Print2(100);		// �Լ� �����͸� �̿��� ���
	Print3(100);		// �Լ� ��ü�� �̿��� ���. Print3.operator(100)�� ����.
}

/*
	C++������ struct Ű����� class�� ���� ����.
	�Ѱ��� �������� �ִٸ�,class�� ���������ڸ� �������� ������ private �Ӽ��� �ǰ�,
	struct�� ���������ڸ� �������� ������ public �Ӽ��� �ȴ�.

	struct �ۼ� �� >
	struct Demo
	{
		..... ����
	}

	class �ۼ� �� >
	class Demo
	{
	public:
		..... ����
	}
*/