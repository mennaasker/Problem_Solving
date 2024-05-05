#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Sheet 5, Problem 5

/*You have an array of integers contain Mono numbers only (from 0 to 9)
, write c function to find the most repeated number (try in O(n)).*/

#define size 10

int find_mostRepeatedNumber(int* ptr, int arr_size);


int main()
{
    int arr[size] = {0,1,2,3,4,3,5,3,6,5}, res = 0;

    res = find_mostRepeatedNumber(arr,size);
    printf("The most repeated number: %d\n", res);

    return 0;
}

int find_mostRepeatedNumber(int* ptr, int arr_size)
{
    int num = 0, i, j, count = 1, most_rep = 0;
    for(i = 0; i < arr_size ; i++)
    {
        for(j = 1 ; j < arr_size ; j++)
        {
            if(ptr[i] == ptr[j])
            {
                count++;
            }

            if(count > most_rep)
            {
                most_rep = count;
                num = ptr[i];
            }
        }
        count = 1;

    }

    return num;

}


