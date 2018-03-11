// 클라이언트 코드와 서버 코드


// callback 메커니즘
// 클라이언트가 서버를 호출하면 콜(call)이라고 한다.
// 반대로 서버가 클라이언트를 호출하면 콜백(callback)이라고 한다.


#include "stdafx.h"
#include <iostream>

using namespace std;

// 서버 코드

void Output_info()
{
	cout << "정보 출력 !!" << endl;
}

// 클라이언트 코드
int main()
{
	Output_info();

	return 0;
}