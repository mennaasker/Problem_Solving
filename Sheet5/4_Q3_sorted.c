#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Sheet 5, Problem 4

/*repeat Q3 but array is sorted (try less than O(n)).
array {1,1,2,2,4,4,70,70,73,80,80,81,81} ->73.*/

#define size 13

int find_nonRepeatedNumber(int* ptr, int arr_size);


int main()
{
    int arr[size] = {1,1,2,2,4,4,71,70,70,80,80,81,81}, res = 0;

    res = find_nonRepeatedNumber(arr,size);
    printf("The non repeated number: %d\n", res);

    return 0;
}

int find_nonRepeatedNumber(int* ptr, int arr_size)
{
    int num = 0, i, j, count = 0;
    for(i = 0; i < arr_size ; i+=2)
    {
        j = 1+i;
        if(ptr[i] != ptr[j])
        {
            num = ptr[i];
            return num;

        }
    }

}


