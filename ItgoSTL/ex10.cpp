// 함수 호출 연산자 오버로딩

#include "stdafx.h"
#include <iostream>

using namespace std;

struct FuncObj
{
	void operator() (int arg) const
	{
		cout << "정수 : " << arg << endl;
	}

	void operator() (int arg1, int arg2) const
	{
		cout << "정수 : " << arg1 << ", " << arg2 << endl;
	}

	void operator() (int arg1, int arg2, int arg3) const
	{
		cout << "정수 : " << arg1 << ", " << arg2 << ", " << arg3 << endl;
	}
};


int main()
{
	FuncObj print;
	print(100);						// 객체 생성 후에 호출(암시적 호출)
	print(100, 200);
	print(100, 200, 300);

	cout << endl;

	print.operator() (100);			// 객체 생성 후에 호출(명시적 호출)
	print.operator() (100, 200);
	print.operator() (100, 200, 300);

	cout << endl;

	FuncObj().operator() (100);		// 임시 객체 호출(암시적)
	FuncObj().operator() (100, 200);
	FuncObj().operator() (100, 200, 300);

	return 0;
}

/*
	임시 객체는 클래스 이름으로도 생성 가능.
	임시 객체는 그 문장에서만 사용할 수 있다. 즉, 그 문장에서 생성되고 그 문장을벗어나면 바로 소멸된다.
*/