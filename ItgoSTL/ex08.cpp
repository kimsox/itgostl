// ���� �Լ��� �̿��� ������ �����ε�

// �׵��� �н��� �Դ� ������ �����ε��� "����Լ��� �̿��� ������ �����ε�"

// ������ �����ε����� ũ�� 2������ �ִ�.

/* 1. ����Լ� ������ �����ε�
	
	class Point
	{
		.....
	};

	int main()
	{
		Point pt1(1,2), pt2(3,3);
		pt1 + pt2;		// pt1.operator+(pt2)

		return 0;
	}

	2. �����Լ� ������ �����ε�
	class Point
	{
		...
	};

	const Point operator+(arg1, arg2)
	{
	//�̷������� �ؾ��Ѵ�.
	}

	int main()
	{
		Point pt(1,2);

		operator(k + pt1);		
		// k�� ������ �����ε� ��ü�� �ƴϹǷ� k.operator+(pt1) ó�� ȣ���� �Ұ����ϴ�.
		// ����, operator+(k, pt1) ó�� ȣ���ؾ� �Ѵ�.

		return 0;

*/


// ����Լ��� �̿��� �����ε�
//#include "stdafx.h"
//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//	int x; 
//	int y;
//
//public:
//	Point(int intX = 0, int intY = 0)
//		: x(intX), y(intY) {}
//
//public:
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//
//	const Point operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//};
//
//int main()
//{
//	Point p1(2, 3), p2(5, 5);
//	Point p3;
//
//	p3 = p1 - p2;
//	p3.Print();
//
//	return 0; 
//}

// �����Լ��� �̿��� �����ε�