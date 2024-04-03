#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 6

/*Write a C function to take an array and reverse its elements.*/

void scanArray(int size, int* ptr);
void printArray(int size, int* ptr);

int main()
{
    int size = 0;
    int* arr;


    printf("Enter size of array: ");
    scanf("%d", &size);

    arr = (int*)(malloc(size*sizeof(int)));

    printf("Enter elements of array: ");
    scanArray(size, arr);

    printArray(size, arr);

    return 0;
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


void printArray(int size, int* ptr)
{
    int i ;
    for (i = size-1; i >= 0 ; i--)
    {
        if (i == size-1)
            printf("{%d, ", ptr[i]);
        else if (i == 0)
            printf("%d}", ptr[i]);
        else
            printf("%d, ", ptr[i]);
    }
}
