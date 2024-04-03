#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 13

/*Write c function to take an array and return the biggest difference
between 2 numbers in the array (the smaller number must come first in the
array) {10,1,5,3,6,8,7,2}->return 7 difference between 1,8.*/

void scanArray(int size, int* ptr);
void printArray(int size, int* ptr);
int diff_betweenArray(int size, int* ptr);

int main()
{
    int *arr = NULL;
    int array_size, res = 0;

    printf("Enter array size: ");
    scanf("%d", &array_size);

    arr = (int*)(malloc(array_size*sizeof(int)));

    scanArray(array_size,arr);

    res = diff_betweenArray(array_size, arr);
    printf("The result is %d", res);

    return 0;
}




int diff_betweenArray(int size, int* ptr)
{
    int i, j, first_opd = 1, first_index = 0, sec_opd = 0;
    for (i = 0; i < size-1 ; i++)
    {

        for(j = 1; j < size; j++)
        {
            if(ptr[i] < ptr[j+i] )
            {
                if(j == size-1-i)
                {
                    first_opd = ptr[i];
                    first_index = i;
                }

            }


            if(ptr[i] > ptr[j+i] && i > first_index)
            {
                    sec_opd = (ptr[i] > ptr[i-1])? ptr[i]: ptr[i-1];

            }
        }

    }

    return sec_opd - first_opd;
}

void scanArray(int size, int* ptr)
{
    int i;
    printf("Enter Array elements: ");
    for (i = 0; i< size ; i++)
    {
        scanf("%d", &ptr[i]);
    }

}

void printArray(int size, int* ptr)
{
    int i ;
    for (i = 0; i < size ; i++)
    {
        if (i == 0)
            printf("{%d, ", ptr[i]);
        else if (i == size-1)
            printf("%d}\n", ptr[i]);
        else
            printf("%d, ", ptr[i]);
    }
}

