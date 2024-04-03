#include <stdio.h>
#include <stdlib.h>

// sheet 1 , Problem 2

/*Write a program to take numbers from user and find the
max and min from them (let users choose the No of
numbers.*/

void scanArray (int* arr, int size);
void printArray (int* arr, int size);
void selectionSort(int* arr, int size);


int main()
{
    int size_of_array;
    int *numbers;

    printf("Enter the Number of Numbers: ");
    scanf("%d", &size_of_array);

    numbers = (int*)malloc(size_of_array*sizeof(int));
    printf("Enter the Numbers: ");
    scanArray(numbers, size_of_array);
    printArray (numbers, size_of_array);

    selectionSort(numbers, size_of_array);
    printf("The maximum number %d", numbers[size_of_array-1]);
    printf("\nThe minimum number %d", numbers[0]);

    return 0;
}


void scanArray (int* arr, int size)
{
    int i;
    for (i = 0 ; i< size ; i++)
    {
        scanf("%d", &arr[i]);
    }

}

void printArray (int* arr, int size)
{
    int i;
    for (i = 0 ; i< size ; i++)
    {
        if (i == 0)
        {
          printf("{%d, ", arr[i]);
        }
        else if (i == size-1)
        {
            printf("%d}", arr[i]);
        }else
            printf("%d, ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int* arr, int size)
{
    int i , j, temp = 0;

    for(i = 0; i< size-1 ; i++)
    {
        for(j = i+1 ; j< size ; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

}
