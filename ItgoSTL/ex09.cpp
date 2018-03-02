// STL 프로그래밍 있어서 필요한 연산자 오버로딩


/*
	-	함수 호출 연산자 오버로딩 : ()연산자

		객체를 함수처럼 동작하게 하는 연산자

		예>
			Print(100) 를 다음과 같이 세가지 경우로 해석할 수 있다.

			1) Print가 함수 이름인 경우에는 함수 호출
			2) Print가 함수 포인터인 경우에는 함수포인터
			3) Print가 객체인 경우에는 함수객체

*/

#include "stdafx.h"
#include <iostream>

using namespace std;

struct FObject
{
public:
	void operator() (int arg) const
	{
		cout << "숫자 출력 : " << arg << endl;
	}
};

void Print1(int arg)
{
	cout << "숫자 출력 : " << arg << endl;
}

int main()
{
	void(*Print2)(int) = Print1;
	FObject Print3;

	Print1(100);		// 함수 호출
	Print2(100);		// 함수 포인터를 이용한 출력
	Print3(100);		// 함수 객체를 이용한 출력. Print3.operator(100)와 같다.
}

/*
	C++에서는 struct 키워드는 class와 거의 같다.
	한가지 차이점이 있다면,class는 접근제어자를 지정하지 않은면 private 속성이 되고,
	struct는 접근제어자를 지정하지 않으면 public 속성이 된다.

	struct 작성 예 >
	struct Demo
	{
		..... 정의
	}

	class 작성 예 >
	class Demo
	{
	public:
		..... 정의
	}
*/