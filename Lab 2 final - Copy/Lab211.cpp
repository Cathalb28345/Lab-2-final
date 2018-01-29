#include <iostream>
using namespace std;
int main()
{
	int ArrA[] = {1,2,3,4,5,6,7,8,9,10,11,12,1,1,5,6,3,18,13,4,2,7,7,7,9};
	int INdex2,count = 1, length = sizeof(ArrA)/sizeof(*ArrA), Duplicates = 0;
	int ArrB[length][2];
	ArrB[0][0] = ArrA[0];
	ArrB[0][1] = 0;
	for(int INdex = 1; INdex < length; INdex++)
	{
		for(INdex2 = 0; INdex2 < count; INdex2++)
		{
			if(ArrA[INdex] == ArrB[INdex2][0])
			{
				ArrB[INdex2][1]++;
				break;
			}
		}
		if(INdex2 == count)
		{
			ArrB[count][0] = ArrA[INdex];
			ArrB[count][1] = 0;
			count++;
		}
	}
	cout << "Array: {" << ArrA[0];
	for(int INdex = 1; INdex < length; INdex++)
		cout << "," << ArrA[INdex];
	cout << "}";
	for(int INdex = 0; INdex < count; INdex++)
	{
		Duplicates = Duplicates + ArrB[INdex][1];
	}
	cout << "\nNumber of duplicate elements: " << Duplicates;
	return 0;
}
