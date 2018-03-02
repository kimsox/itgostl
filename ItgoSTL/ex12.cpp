// [] 연산자 오버로딩은 일반적으로 컨테이너 객체에 사용된다.
// 컨테이너 객체가 관리하는 내부 원소에 접근하 ㄹ때 사용된다.

#include "stdafx.h"
#include <iostream>

using namespace std;

class Array
{
	int *arr;
	int size;
	int capacity;

public:
	Array(int cap = 100) : arr(0), size(0), capacity(cap)
	{
		arr = new int[capacity];
	}
	~Array()
	{
		delete[] arr;
	}

	void Add(int data)
	{
		if (size < capacity)
			arr[size++] = data;
	}

	int Size() const
	{
		return size;
	}

	int operator[] (int idx) const
	{
		return arr[idx];
	}
};


int main()
{
	Array ar(10);
	ar.Add(10);
	ar.Add(20);
	ar.Add(30);

	for (int i = 0; i < ar.Size(); i++)
	{
		cout << ar[i] << endl;
		cout << ar.operator[] (i) << endl;
	}

	return 0;

}