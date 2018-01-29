#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int cmpfunc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int values[32] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int main ()
 {
    int *item;
    int key  ;
    int array1[5];
    int position = -1;

    cout<< "\nEnter number to check if key is active in array\n";
	cin>> key;

   item = (int*) bsearch (&key, values, 32, sizeof (int), cmpfunc);

   if( item != NULL )
    {
      printf("Found item = %d\n", *item);
    }
   else
   {
      printf("Item = %d could not be found\n", *item);
   }

    for(int index = 0; index < 32; index++)
    {
        if(array1[index] == 10)
        {
            position = index;
        }
    }

    cout<<position;

   return(0);
}
