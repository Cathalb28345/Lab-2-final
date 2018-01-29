// Lab209.cpp : Write a C++ program to delete an element from an array of size 12 at specified position.
//				The elements higher in the array are shifted to the left one position. The program should store a variable (called count) to 
//				track the number of elements in the array. The count cannot exceed the size of the array.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int arrA[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int ArrCount = 12;
	int position = 0;
	cout << "Array Contents : {1,2,3,4,5,6,7,8,9,10,11,12}\n";
	while (ArrCount > 0)
	{
		cout << "What position in array do you want to delete?\n-1 to end\n";
		cin >> position;
		if (position > ArrCount)
			cout << "Enter a number less than " << ArrCount + 1 << "\n";
		else if (position < 0)
			break;
		else
		{
			for (int i = position; i < ArrCount; i++)
				arrA[i] = arrA[i + 1];
			ArrCount--;
			cout << "Array: {" << arrA[0];
			for (int i = 1; i < ArrCount; i++)
				cout << "," << arrA[i];
			cout << "}\n";
			if (ArrCount == 12)
				cout << "Array limit reached.\n";
		}
	}
	return 0;
}
