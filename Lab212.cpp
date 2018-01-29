// Lab212.cpp : Write a C++ program to find reverse of an array. You must only declare and use 1 array.


#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int arrA[] = { 1,2,3,4,5,6,7,8,9,10,11,12};
	int tempArray, length = sizeof(arrA) / sizeof(*arrA);
	cout << "Sample Array : {" << arrA[0];

	for (int Index = 1; Index < length; Index++)
		cout << "," << arrA[Index];
	for (int Index = 0; Index < length / 2; Index++)
	{
		tempArray = arrA[Index];
		arrA[Index] = arrA[length - 1 - Index];
		arrA[length - 1 - Index] = tempArray;
	}
	cout << "}\nReversed array: \n{" << arrA[0];
	for (int Index = 1; Index < length; Index++)
	{
		cout << "," << arrA[Index];
		cout << "}";
		
	}
		cout << "\n\t";
		system("pause");
}

