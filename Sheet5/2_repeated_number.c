#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Sheet 5, Problem 2

/*You have an array of 101 element contain all number from 1 t0 100, so one
number is repeated, write c function to find the repeated number (try in
O(n)).*/
#define size 11
#define repeated_number 5

int find_repeatedNumber(int* ptr, int arr_size);


int main()
{
    int arr[size], res = 0;

    for(int i = 0; i < repeated_number ; i++)
    {
        arr[i] = i+1;

    }

    for(int i = repeated_number ; i < size ; i++)
    {
        arr[i] = i;

    }


    res = find_repeatedNumber(arr,size);
    printf("The repeated number: %d\n", res);

    return 0;
}

int find_repeatedNumber(int* ptr, int arr_size)
{
    int num = 0, i, j;
    for(i = 0; i <= arr_size ; i++)
    {
        j = i+1;
        if(ptr[i] == ptr[j])
        {
            num = ptr[i];
        }
    }

    return num;
}


