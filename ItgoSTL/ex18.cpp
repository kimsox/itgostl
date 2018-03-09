#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:
	// explicit 키워드를 사용하는 경우에는
	// 생성자를 이용한 형변환을 의도하지 않을 경우 사용한다.
	// 즉, 암시적 생성자 호출을 사용하지 않겠다. (명시적 생성자 호출만 가능하도록 하겠다.)
	explicit Point(int _x = 0, int _y = 0)
		: x(_x), y(_y)
	{
		cout << "헤헤" << endl;
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

	//pt = 10;		// pt = Point(10, 0)	암시적 생성자 호출 후에 대입
	pt = Point(10);	// 명시적 생서자 호출 (explicit 키워드를 사용했기 때문에)
	pt.Print();

	


	return 0;
}