#include <stdio.h>
#include <stdlib.h>

// sheet 1 , Problem 3

/*Write a program to take numbers from user and
calculate the sum of them (let users choose the No of
numbers.*/

void scanArray (int* arr, int size);
void printArray (int* arr, int size);
int sum(int* arr, int size);


int main()
{
    int size_of_array , res;
    int *numbers;

    printf("Enter the Number of Numbers: ");
    scanf("%d", &size_of_array);

    numbers = (int*)malloc(size_of_array*sizeof(int));
    printf("Enter the Numbers: ");
    scanArray(numbers, size_of_array);
    printArray (numbers, size_of_array);

    res = sum(numbers, size_of_array);

    printf("The sum is = %d", res);

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

int sum(int* arr, int size)
{
    int i, result = 0;

    for(i = 0; i< size ; i++)
    {
     result = result + arr[i];
    }
    return result;
}
