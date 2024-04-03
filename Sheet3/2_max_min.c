#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 2

/*Write a C function to return the maximum and minimum number in an
array and their indexes.*/

void scanArray(int size, int* ptr, int* ptr_org);
void printtArray(int size, int* ptr);
void Sort_Array(int size, int* ptr, int* func);
int search_Array(int size, int* ptr, int target);

int main()
{
    int Array_size = 0, target = 0;
    int *arr, *arr_org;
    int min_index = 0, max_index = 0;

    printf("Enter the size of the Array: ");
    scanf("%d", &Array_size);

    arr = (int*)(malloc(Array_size*sizeof(int)));
    arr_org = (int*)(malloc(Array_size*sizeof(int)));

    scanArray(Array_size, arr, arr_org);
    printtArray(Array_size, arr_org);

    Sort_Array(Array_size, arr, printtArray);
    printf("\n");

    min_index = search_Array(Array_size, arr_org, arr[0]);
    max_index = search_Array(Array_size, arr_org, arr[Array_size-1]);

    printf("\n The minimum is %d and their index is %d ", arr[0], min_index);
    printf("\n The maximum is %d and their index is %d ", arr[Array_size-1], max_index);

    return 0;
}

void Sort_Array(int size, int* ptr, int* func)
{
    int i, j, temp;
    for(i = 1 ; i <= size ; i++)
    {
        for (j = 0; j < size-i ; j++)
        {
            if(ptr[j] > ptr[j+1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
            }
        }
    }
    //printtArray(size, ptr);

}

int search_Array(int size, int* ptr, int target)
{
    int i;
    for(i = 0 ; i < size ; i++)
    {
        if(ptr[i] == target)
            return i;
    }
}

void scanArray(int size, int* ptr, int* ptr_org)
{
    int i ;
    printf("Enter Array elements: ");
    for (i = 0; i< size ; i++)
    {
        scanf("%d", &ptr[i]);
        ptr_org[i] = ptr[i];
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
