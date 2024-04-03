#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define size 15

//Sheet 3, Problem 9

/*Write a C function that return the count of the longest consecutive
occurrence of any number ,and return the number
Array={1,2,2,3,3,3,3,4,4,4,4,4,3,3,3} result -> 5 ,number -> 4.*/

int search_consecutive(int* ptr, int Size);

int main()
{
    int  res = 0;
    int arr[size] = {1,2,2,3,3,3,3,4,4,4,4,4,3,3,3};


    res = search_consecutive(arr, size);
    printf("%d", res);

    return 0;
}



int search_consecutive(int* ptr, int Size)
{
    int i, count = 1 , max_count = 0, val = 0;
    for(i = 0 ; i < Size ; i++)
    {
        if (ptr[i] == ptr[i+1])
        {
            count++;
            if (count > max_count)
            {
                max_count = count;
                val = ptr[i];
            }


        }else
        {
            count = 1;
        }


    }


    return val;
}
