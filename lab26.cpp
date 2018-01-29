
//#include "stdafx.h"
//
//Write a C++ program to count total number of even and odd elements in an array.
#include <iostream>


using namespace std;
int main()
{
	const int N = 5;
	int a[N];
	for (int i = 0; i < N ; i++)
		{
			cout << "Enter a number\n";
			cin >> a[i];
		}
	int odd = 0;
	for (int i = 0; i< N ; i++)
		{
			if (a[i] % 2)
				odd++;
		}
	cout << "Even numbers: " << (N - odd) << "\nOdd numbers: " << odd;
	system("pause");
	return 0;
}



