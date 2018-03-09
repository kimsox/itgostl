#include "stdafx.h"
#include <iostream>

using namespace std;

class A
{

};

class B
{
public:
	operator A()
	{
		cout << "operator A() 호출" << endl;
		return A();
	}

	operator int()
	{
		cout << "operator int() 호출" << endl;
		return 100;
	}

	operator double()
	{
		cout << "operator double() 호출" << endl;
		return 4.4;
	}
};

int main()
{
	A a;
	int i;
	double d;

	B b;
	a = b;		// b.operator A() 암시적 호출
	i = b;		// b.operaotr int() 암시적 호출
	d = b;		// b.operator double() 암시적 호출

	cout << endl;

	a = b.operator A();		// 명시적 호출
	i = b.operator int();
	d = b.operator double();

	return 0;
}