#include <iostream>
using namespace std;
void printPairs(int product, int arr[], int arrSize)
{
	int ValPairs[arrSize/2][2];
	int count = 0, i2;
	bool check = true;
	for(int i=0; i < arrSize-2; i++)
	{
		if(product % arr[i] == 0)
		{
			for(check = true, i2=0; i2<count; i2++)
			{
				if(arr[i]==ValPairs[i2][0] || arr[i]==ValPairs[i2][1])
				{
					check = false;
					break;
				}
			}
			if(check)
			{
				for(int i2=i+1; i2<arrSize; i2++)
				{
					if(arr[i]*arr[i2] == product)
					{
						if(arr[i] < arr[i2])
						{
							ValPairs[count][0] = arr[i];
							ValPairs[count][1] = arr[i2];
						}
						else
						{
							ValPairs[count][0] = arr[i2];
							ValPairs[count][1] = arr[1];
						}
						count++;
						break;
					}
				}
			}
		}
	}
	if(count == 0)
		cout<< "No product Pairs found";
	else
	{
		cout<< "Pairs of elements whose product equals "<< product<< ":";
		for(int i=0; i<count; i++)
			cout<< "\n("<< ValPairs[i][0]<< ","<< ValPairs[i][1]<< ")";
	}
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,1,1,5,6,3,18,13,4,2,7,7,7,9};
	int length = sizeof(a)/sizeof(*a), prod;
	cout<< "Array : {"<< a[0];
	for(int i = 1; i < length; i++)
		cout<< ","<< a[i];
	cout<< "}\nEnter number to check product pairs\n";
	cin>> prod;
	printPairs(prod,a,length);
}
