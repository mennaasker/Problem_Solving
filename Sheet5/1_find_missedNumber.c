#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Sheet 5, Problem 1

/*You have an array of 100 element contain all number from 0 t0 100 except
one number, write c function to find the missed number (try in O(n)).*/
#define size 100

int find_missedNumber(int* arr, int arr_size);


int main()
{
    int arr[size], res = 0;

    for(int i = 0; i <= size ; i++)
    {
        if(i == 99)
        {
            continue;
        }else
        {
            arr[i] = i;
        }

      //printf("%d\n", arr[i]);
    }

    res = find_missedNumber(arr,size);
    printf("%d\n", res);

    return 0;
}

int find_missedNumber(int* arr, int arr_size)
{
    int number;
    for(int i = 0; i <= arr_size ; i++)
    {
        if(arr[i]+1 != arr[i+1])
        {
            number = arr[i]+1;
            return number;
        }
    }
}


