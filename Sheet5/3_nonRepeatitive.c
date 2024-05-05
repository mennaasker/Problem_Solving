#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Sheet 5, Problem 3

/*You have an array of integers all numbers in the array repeated 2 times
except one number repeated one time only find this number (try o(n)).
array like {1,2,4,66,2,1,500,66,7,7,500}->4.*/

#define size 11

int find_nonRepeatedNumber(int* ptr, int arr_size);


int main()
{
    int arr[size] = {1,2,4,66,2,1,500,66,7,7,500}, res = 0;

    res = find_nonRepeatedNumber(arr,size);
    printf("The non repeated number: %d\n", res);

    return 0;
}

int find_nonRepeatedNumber(int* ptr, int arr_size)
{
    int num = 0, i, j, count = 0;
    for(i = 0; i < arr_size ; i++)
    {
        num ^=ptr[i];
    }

    return num;
}


