#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define size 14

//Sheet 3, Problem 8

/*Write a C function that return the count of the longest consecutive
occurrence of a given number in an array.
Array= {1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 -> result = 4.*/

int search_consecutive(int number, int* ptr, int Size);

int main()
{
    int num = 0, res = 0;
    int arr[size] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3};


    printf("Enter the number: ");
    scanf("%d", &num);

    res = search_consecutive(num, arr, size);
    printf("%d", res);

    return 0;
}



int search_consecutive(int number, int* ptr, int Size)
{
    int i, count = 1 , max_count = 0;
    for(i = 0 ; i < Size ; i++)
    {
        if (ptr[i] == number && ptr[i] == ptr[i+1])
        {
            count++;
            max_count = (count > max_count)? count : max_count;

        }else
        {
            count = 1;
        }


    }


    return max_count;
}
