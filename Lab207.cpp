// Lab207.cpp :Write a C++ program to copy all elements from an array to another array. The arrays are each of size 20.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
	const int N = 20
	int arrA[N], arrB[N];
	for (int index = 0 ; index < N; index++)
	{
		cout << "Enter a number\n" ;
		cin >> arrA[index];
	}
	for (int index = 0 ; index< N; index++)
	{
		arrB[index] = arrA[index] ;
	}
	for (int index = 0 ; index < N; index ++)
		cout << "\nArray element " << index + 1 << " : " << arrB[index] << "  ";
	system("pause");
	return 0; 
}
