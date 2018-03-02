// ������ �����ε� : C++���� �����ϴ� �⺻Ÿ���� �ƴ� Ŭ���� Ÿ��,
// ��, ����� ���� Ÿ�Կ� �����ڸ� ����� �� �ֵ��� �ϴ� ����

#include "stdafx.h"
#include <iostream>
using namespace std;

class Point
{
public:
	int x;
	int y;

public:
	// ������ : ��ü�� ������ �� �ڵ������� ȣ��Ǵ� �Լ�
	// �Ҹ��� : ��ü�� �Ҹ�� �� �ڵ������� ȣ��Ǵ� �Լ�
	Point(int _x = 0,int _y = 0)
		: x(_x), y(_y) {}
	void Print() const { cout << x << ", " << y << endl; }

	//void operator+(Point arg)
	//{
	//	cout << "operator+() �Լ� ȣ��" << endl;
	//}
	const Point operator+(const Point& arg)
	{
		Point pt;
		pt.x = this->x + arg.x;
		pt.y = this->y + arg.y;
		return pt;
	}
};



int main()
{
	//int n1 = 10, n2 = 20;

	//cout << n1 + n2 << endl;

	//return 0;
	Point p1(2, 3), p2(5, 5);

	//p1 + p2; // �����Ϸ��� �� ��ü�� ������ �𸣱� ������ �����߻�!!
	//p1 + p2;	// p1.operator+(p2); �� ���� ����̴�.
	
	Point pt3 = p1.operator+(p2);
	pt3.Print();


	return 0;
}