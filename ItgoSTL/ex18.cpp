#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:
	// explicit Ű���带 ����ϴ� ��쿡��
	// �����ڸ� �̿��� ����ȯ�� �ǵ����� ���� ��� ����Ѵ�.
	// ��, �Ͻ��� ������ ȣ���� ������� �ʰڴ�. (����� ������ ȣ�⸸ �����ϵ��� �ϰڴ�.)
	explicit Point(int _x = 0, int _y = 0)
		: x(_x), y(_y)
	{
		cout << "����" << endl;
	}

	void Print() const
	{
		cout << x << ", " << y << endl;
	}
};

int main()
{
	Point pt;
	pt.Print();

	//pt = 10;		// pt = Point(10, 0)	�Ͻ��� ������ ȣ�� �Ŀ� ����
	pt = Point(10);	// ����� ������ ȣ�� (explicit Ű���带 ����߱� ������)
	pt.Print();

	


	return 0;
}