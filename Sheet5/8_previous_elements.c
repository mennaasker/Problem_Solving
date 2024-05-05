#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


//Sheet 5, Problem 8 chatgpt aided

/*Write C function to take an array and if it finds a number "given" makes the
previous elements in a new array and returns it (try to optimize).*/

#define size 10

int* previous_elements(int* ptr,int ptr_size, int given_element);

int index = 0;

int main()
{
    int arr[size] = {1,2,3,4,5,6,7,8,9,10};
    int given = 5;
    int* output_arr;

    output_arr = previous_elements(arr, size, given);

    for (int i = 0; i < index ; i++)
    {
        if (i == 0)
            printf("{%d, ", output_arr[i]);
        else if (i == index-1)
            printf("%d}\n", output_arr[i]);
        else
            printf("%d, ", output_arr[i]);
    }


    return 0;

}

int* previous_elements(int* ptr,int ptr_size, int given_element)
{
    int *output;

    for(int i = 0 ; i < ptr_size ; i++)
    {
        if(ptr[i] == given_element)
        {
            index = i;
            output = (int*)malloc(index*sizeof(int));
        }
    }

    for(int i = 0 ; i < index ; i++)
    {
        output[i] = ptr[i];
    }

    return output;

}




