// 콜백 함수


// 이 예제는 실제로 구현할 수 없는 코드이다.
// 서버는 클라이언트의 존재를 알 수 없기 때문이다.
// 즉, 서버가 미리 클라이언트 함수를 알고 호출하는 것은 불가능 하다


#include "stdafx.h"
#include <iostream>

using namespace std;

void Server();
void Client();


// 서버
void Server()
{
	cout << "난 서버야 !!" << endl;
	Client();		// 서버에서 클라이언트를 호출
}

void Client()
{
	cout << "난 클라이언트야 !!" << endl;
}


int main()
{
	Server();

	return 0;
}

// 콜백 메커니즘을 구현하기 위해서는 클라이언트가 서버를 호출할 때
// 서버에 클라이언트 정보를 제공해야한다.

// 서버에 클라이언트 정보를 제공하는 방법
/*
	- 함수포인터의 매개변수를 이용해서 콜백함수의 주소를 전달하는 방법이 대표적인 방법이다.


*/