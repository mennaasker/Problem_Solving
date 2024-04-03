#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 7

/*Write a C function to take 2 arrays and swap them (try with 2 different
sizes).*/

void scanArray(int size, int* ptr);
void printArray(int size, int* ptr);
void Swap_Array(int size_1st, int* ptr1, int size_2nd, int* ptr2);

int main()
{
    int size1 = 0 , size2 = 0;
    int* arr1, arr2;


    printf("Enter size of the first array: ");
    scanf("%d", &size1);
    arr1 = (int*)(malloc(size1*sizeof(int)));
    printf("Enter elements of array: ");
    scanArray(size1, arr1);

    printf("Enter size of the second array: ");
    scanf("%d", &size2);
    arr2 = (int*)(malloc(size2*sizeof(int)));
    printf("Enter elements of array: ");
    scanArray(size2, arr2);

    Swap_Array(size1, arr1, size2, arr2);
    printArray(size1, arr1);
    printArray(size2, arr2);

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

void Swap_Array(int size_1st, int* ptr1, int size_2nd, int* ptr2)
{
    int i,j = 0, temp = 0;
    for (i = 0 ; i < size_1st ; i++)
    {

        if (j < size_2nd)
        {
            temp = ptr1[i];
            ptr1[i] = ptr2[j];
            ptr2[j] = temp;
            j++;
        }

    }
}

void printArray(int size, int* ptr)
{
    int i ;
    for (i = 0; i < size ; i++)
    {
        if (i == 0)
            printf("{%d, ", ptr[i]);
        else if (i == size-1)
            printf("%d}\n", ptr[i]);
        else
            printf("%d, ", ptr[i]);
    }
}
