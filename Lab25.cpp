//Write a C++ program to find second largest element in an array.
#include "stdafx.h"
#include <iostream>
using namespace std;
int main() 
{
	int n, number[50], largest, second;
	cout << "Enter number of elements: ";
	cin >> n;
	for (int i = 0; i<n; i++) 
	{
		cout << "Enter Array Element" << (i + 1) << ": ";
		cin >> number[i];
	}
	
	if (number[0]<number[1]) 
	{
		largest = number[1];
		second = number[0];
	}
	else {
		largest = number[0];
		second = number[1];
	}
	for (int i = 2; i< n; i++) 
	{
		
		if (number[i] > largest) 
		{
			second = largest;
			largest = number[i];
		}
		
		else if (number[i] > second && number[i] != largest)
		{
			second = number[i];
		}
	}
	cout << "Second Largest Element in array is: " << second; 
	system("pause");
	return 0;
}