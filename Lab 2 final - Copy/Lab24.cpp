// Lab24.cpp : Write a C++ program to find maximum and minimum element in an array.


#include "stdafx.h"
#include <iostream>
using namespace std;

const int N = 5;


int main() 
{

	int values[N]; // Declares array and how many elements
	int small, big; // Declares integer

	for (int i = 0; i < N; i++) 
	{
		
		cout << "Enter value " << i << ": ";
		cin >> values[i];
	}
	 small = values[0];
	 big = values[0];
	for (int i = 0; i < N; i++) // Works out the biggest number
	{

		if (values[i] > big) // Compare biggest value with current element
		{
			big = values[i];
		}
	}

	for (int i = 0; i < N; i++) // Works out the smallest number
	{
		if (values[i] < small) 
		{
			small = values[i];
		}
	}

	cout << "The biggest number is " << big << endl; // Prints outs the biggest number
	cout << "The smallest number is " << small << endl; // Prints out the smallest number
	system("pause");
}