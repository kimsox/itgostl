// const ��� �Լ��� �� const ��� �Լ�

// const ��� �Լ� : ��� �Լ� ������ ��ü�� ��� ������ �������� �ʴ´ٴ� ���� �����ϴ� �Լ�
// ���� const ��ü��  const ����Լ� �� ȣ���� �� �ִ�.
// const ��� �Լ����� ��� ������ ������ ��쿡�� �����Ϸ� ������ �߻��Ѵ�.


#include "stdafx.h"
#include <iostream>
using namespace std;

class Point2
{
private:
	int x;
	int y;

public:
	Point2(int _x = 0, int _y = 0)
		: x(_x), y(_y) {}

	int GetX() const { return x; }		// const �Լ�
	int GetY() const { return y; }		// const �Լ�

	void SetX(int _x) { x = _x; }		// �� const �Լ�
	void SetY(int _y) { y = _y; }		// �� const �Լ�

	void Print() const					// const �Լ�
	{
		cout << x << ", " << y << endl;
	}
};


int main()
{
	const Point2 p1(0, 0);				// const ��ü : ��� ��� ���� �Ұ���
	Point2 p2(2, 3);					// �� const ��ü

	p1.Print();
	p2.Print();

	cout << "P1 : " << p1.GetX() << ", " << p1.GetY() << endl;
	cout << "P2 : " << p2.GetX() << ", " << p2.GetY() << endl;

	//p1.SetX(3);	// �����߻�!! const��ü�� const ����Լ��� ȣ�Ⱑ��
	//p1.SetY(10);	// �����߻�!! const��ü�� const ����Լ��� ȣ�Ⱑ��

	p2.SetX(3);		// ���� ����
	p2.SetY(10);	// ���� ����
	return 0;
}