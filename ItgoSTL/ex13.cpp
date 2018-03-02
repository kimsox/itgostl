// 상수 객체를 반환하는 [] 연산자 오버로딩

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

	int operator[] (int idx) const
	{
		return arr[idx];
	}

	int& operator[] (int idx)
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

	cout << ar[0] << endl;		// ar.operator[] (int) 호출
	cout << endl;

	const Array& ar2 = ar;
	cout << ar2[0] << endl;		// ar.operator[] (int) 호출
	cout << endl;

	ar[0] = 100;		// ar.operator[] (int) 호출
	// ar2[0] = 100;	// ar2는 const 객체이므로 에러발생한다능!!!
	cout << ar[0] << endl;


	return 0;
}