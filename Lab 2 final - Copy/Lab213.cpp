// Lab213.cpp :		Write a C++ program to left rotate an array by one position. Note: the first element is rotated to the end of the array.
//

#include "stdafx.h"


void leftShiftbyOne(int Array[], int n);
void leftRotate(int Array[], int Xelement, int n)
{
	int Index;
	for (Index = 0; Index < Xelement; Index++)
		leftShiftbyOne(Array, n);
}

void leftShiftbyOne(int Array[], int n)
{
	int Index, TemporaryArray;
	TemporaryArray = Array[0];
	for (Index = 0; Index < n - 1; Index++)
		Array[Index] = Array[Index + 1];
	Array[Index] = TemporaryArray;
}

void print(int Array[], int size)
{
	int Index;
	for (Index = 0; Index < size; Index++)
		printf("%d ", Array[Index]);
}
int main()
{
	int Array[] = { 1, 2, 3, 4, 5, 6, 7,8,9,10,11,12 };
	leftRotate(Array, 1, 12);
	print(Array, 12);
	getchar();
	return 0;
}



