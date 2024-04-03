#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 5

/*Write c function to find the most repeated number in an array of integers.*/

int Most_rep(int size, int* ptr);
void scanArray(int size, int* ptr);
void printArray(int size, int* ptr);

int main()
{
    int size = 0, res = 0;
    int* arr;


    printf("Enter size of array: ");
    scanf("%d", &size);

    arr = (int*)(malloc(size*sizeof(int)));

    printf("Enter elements of array: ");
    scanArray(size, arr);

    res = Most_rep(size, arr);
    printf("Most repetitive %d", res);

    return 0;
}



int Most_rep(int size, int* ptr)
{
    int i, j, count = 1, max_count = 0, most_num = 0;

    for (i = 0 ; i < size ; i++)
    {
        for(j = 1 ; j < size ; j++)
        {
            if (ptr[i] == ptr[j])
            {
                count++;

            }

        }

        if(count > max_count)
        {
            max_count = count;
            most_num = ptr[i];

        }
        count = 1;
    }
    return most_num;
}

void scanArray(int size, int* ptr)
{
    int i ;
    printf("Enter Array elements: ");
    for (i = 0; i< size ; i++)
    {
        scanf("%d", &ptr[i]);
    }
}


void printArray(int size, int* ptr)
{
    int i ;
    for (i = 0; i< size ; i++)
    {
        if (i == 0)
            printf("{%d, ", ptr[i]);
        else if (i == size-1)
            printf("%d}", ptr[i]);
        else
            printf("%d, ", ptr[i]);
    }
}
