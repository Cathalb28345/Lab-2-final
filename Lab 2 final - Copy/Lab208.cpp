// Lab208:Write a C++ program to insert an element in an array of size 12 at a specified position. The program should insert an element,
//			at a particular index in the array and shift the elements further in the array to the right.The program should store a variable 
//			(called count),to track the number of elements in the array. The count cannot exceed the size of the array.


#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int arrA[12];
	int count = 0;
	int position = 0;
	while (count < 12)
	{
		cout << "Where in the array do you want to enter the number?\n-1 to end\n";
		cin >> position;
		if (position > count)
			cout << "Enter a number less than " << count + 1 << "\n";
		else if (position < 0)
			break;
		else
		{
			for (int i = count; i > position; i--)
				arrA[i] = arrA[i - 1];
			cout << "What number do you want to place in the array\n";
			cin >> arrA[position];
			count++;
			cout << "Array: {" << arrA[0];
			for (int i = 1; i < count; i++)
				cout << ", " << arrA[i];
			cout << "}\n";
			if (count == 12)
				cout << "Array END.\n";
		}
	}
	return 0;
}


