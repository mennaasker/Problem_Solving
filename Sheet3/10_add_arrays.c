#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 10

/*Write c function to take 2 arrays and return an array by merging
them like this ( arr1={1,2,3,4,5},arr2={11,12,13,14,15} return
arr3={1,11,2,12,3,13,4,14,5,15} ).*/

#define size1 5
#define size2 5

int ptr[size1+size2];

void printArray(int size, int* ptr);
int add_Array(int* ptr1,int ptr1_size, int* ptr2, int ptr2_size);

int main()
{
    int arr1[size1] ={1,2,3,4,5}, arr2[size2] ={11,12,13,14,15};

    add_Array(arr1, size1, arr2, size2);
    printArray(size1+size2,ptr);

    return 0;
}



int add_Array(int* ptr1,int ptr1_size, int* ptr2, int ptr2_size)
{
    int i , j=0, k=0, size = ptr1_size+ptr2_size;

    for (i = 0 ; i<ptr2_size ; i++)
    {

          ptr[i+j] = ptr1[j];
          j++;
          ptr[i+k+1] = ptr2[k];
          k++;

    }

    return ptr;
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

