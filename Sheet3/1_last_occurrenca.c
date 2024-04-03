#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 1

/*Write a C function to return the index of LAST occurrence of a number in a
given array. Array index start from 0. If the item is not in the list return -1.*/

void scanArray(int size, int* ptr);
void printtArray(int size, int* ptr);
int last_Occurrence(int size, int* ptr, int target);

int main()
{
    int Array_size = 0, res = 0 , target = 1;
    int *arr;

    printf("Enter the size of the Array: ");
    scanf("%d", &Array_size);

    arr = (int*)(malloc(Array_size*sizeof(int)));

    scanArray(Array_size, arr);
    printtArray(Array_size, arr);

    res = last_Occurrence(Array_size, arr, target);
    printf("\nThe index is %d", res);

    return 0;
}

int last_Occurrence(int size, int* ptr, int target)
{
    int i, index = -1 ;
    for(i = 0 ; i< size ; i++)
    {
        if (target == ptr[i])
        {
            index = (i > index)? i:index;
        }
    }

    return index;
}

void scanArray(int size, int* ptr)
{
    int i ;
    printf("Enter Array elements: ");
    for (i = 0; i< size ; i++)
    {
        scanf("%d", &ptr[i]);
    }
}

void printtArray(int size, int* ptr)
{
    int i ;
    for (i = 0; i< size ; i++)
    {
        if (i == 0)
            printf("{%d, ", ptr[i]);
        else if (i == size-1)
            printf("%d}", ptr[i]);
        else
            printf("%d, ", ptr[i]);
    }
}
