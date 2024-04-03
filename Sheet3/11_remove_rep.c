#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 11

/*Write a c function that removes the repeated number of an input
sorted array and return a new array without the repeated numbers.*/

int *final_arr = NULL;

void scanArray(int size, int* ptr);
void printArray(int size, int* ptr);
int remove_repeated(int size, int* ptr);

int main()
{
    int *arr = NULL, array_size = 0, counter = 0;;

    printf("Enter the size of array: ");
    scanf("%d", &array_size);

    arr = (int*)(malloc(array_size*sizeof(int)));
    final_arr = (int*)(malloc(array_size*sizeof(int)));
    printf("Enter the array sorted elements: ");
    scanArray(array_size,arr);

    counter = remove_repeated(array_size, arr);
    printArray(counter ,final_arr);

    return 0;
}




int remove_repeated(int size, int* ptr)
{
    int i,j = 0, count = 0;
    for (i = 0; i < size ; i++)
    {
        if(ptr[i] != ptr[i+1])
        {
           final_arr[j] = ptr[i];
           count++;
           j++;
        }

    }
    return count;
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

