// Lab22.cpp :Write a C++ program to print all negative elements in the above array
//

#include <iostream>
#include "stdafx.h"
#include <conio.h>

int main()
{
//	int arr[10], countn = 0
	int countp = 0, countn = 0, countz = 0, arr[10], i;
	std::cout << "Enter 10 numbers : ";
	for (i = 0; i<10; i++)
	{
		std::cin >> arr[i];
	}
	for (i = 0; i<10; i++)
	{
		if (arr[i]<0)
		{
			countn++;
		}
		
		else
		{
			countp++;
		}
	}
	std::cout << "Positive Numbers = " << countp << "\n";
	std::cout << "Negative Numbers = " << countn << "\n";

	system("pause");
	return 0;

}