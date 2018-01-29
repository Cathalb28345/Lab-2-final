#include <iostream>

using namespace std;
int main()
{
	int ArrA[] = { 1,2,3,4,5,6,7,8,9,10,11,1,1,5,6,3,18,13,4,13,12,7,7,7,9 };
	int Index2, count = 1, length = sizeof(ArrA) / sizeof(*ArrA);
	int EleMntX[11][2];
	EleMntX[0][0] = ArrA[0];
	EleMntX[0][1] = 1;
	for (int Index = 1; Index < length; Index++)
	{
		for (Index2 = 0; Index2 < count; Index2++)
		{
			if (ArrA[Index] == EleMntX[Index2][0])
			{
				EleMntX[Index2][1]++;
				break;
			}
			else if (ArrA[Index] < EleMntX[Index2][0])
			{
				break;
			}
		}
		if (Index2 == count)
		{
			EleMntX[count][0] = ArrA[Index];
			EleMntX[count][1] = 1;
			count++;
		}
		else if (ArrA[Index] < EleMntX[Index2][0])
		{
			count++;
			for (int i3 = count; Index2 < i3; i3--)
			{
				EleMntX[i3][0] = EleMntX[i3 - 1][0];
				EleMntX[i3][1] = EleMntX[i3 - 1][1];
			}
			EleMntX[Index2][0] = ArrA[Index];
			EleMntX[Index2][1] = 1;
		}
	}
	cout << "Array: {" << ArrA[0];
	for (int Index = 1; Index < length; Index++)
		cout << "," << ArrA[Index];
	cout << "}\nValue\tFrequency";
	for (int Index = 0; Index < count; Index++)
	{
		cout << "\n" << EleMntX[Index][0] << "\t" << EleMntX[Index][1];
	}
	return 0;
}
