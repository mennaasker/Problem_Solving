#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 12

/*Write c function to take an array (with unknown size) contain 2 zeros
swap the 3 element after the first zero with the 3 element after the second
zero ( x,x,x,0,1,2,3,xxxx,0,5,6,7,xxxx ->swap 1,2,3with 5,6,7).*/

int *arr = NULL;

void scanArray(int size, int* ptr);
void printArray(int size, int* ptr);
int swap_afterZero(int size, int* ptr);

int main()
{
    int array_size = 20;

    printf("Enter array size: ");
    scanf("%d", &array_size);

    arr = (int*)(malloc(array_size*sizeof(int)));

    scanArray(array_size,arr);

    swap_afterZero(array_size, arr);
    printArray(array_size , arr);

    return 0;
}




int swap_afterZero(int size, int* ptr)
{
    int i,j,find_Zero = 0, temp = 0, index = 0;

        for (i = 0; i < size ; i++)
        {
            if(ptr[i] == 0)
            {
                find_Zero++;
                if(find_Zero == 1)
                {
                    index = i+1;
                }
            }

            if (find_Zero == 2)
            {

                 for (j = 0; j < 3 ; j++)
                 {
                    temp = ptr[index+j];
                    ptr[index+j] = ptr[i+1+j];
                    ptr[i+1+j] = temp;
                 }
                 find_Zero = 0;
            }
        }

    return 0;
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

