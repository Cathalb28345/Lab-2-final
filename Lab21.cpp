// Lab21.cpp : Write a C++ program to read and print elements of array of 10 ints
//

#include "stdafx.h"
#include <iostream>
	using namespace std;

	// output contents of array to screen
	void printArray(int arr[10], int size) 
	{
		for (int i = 0; i < size; i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
	
	// test the print array functions
	int main() 
	{

		int arr[10] = {1,2,3,4,6,5,7,8,9,0};
		cout << "The array is: ";
		printArray(arr, 10);
		system("pause");
		return 0;
	}