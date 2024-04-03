#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 14

/*Write c function to find the most repeated number in an array of
char (size of the array is very large) try to optimize your code.*/


void scanArray(int size, char* ptr);
void printArray(int size, char* ptr);
char sort_charArray(int size, char* ptr, void *func);

int main()
{
    int array_size = 0;
    char *arr = NULL;
    char res = 0;

    printf("Enter array size: ");
    scanf("%d", &array_size);

    arr = (char*)(malloc(array_size*sizeof(char)));

    scanArray(array_size,arr);

    res = sort_charArray(array_size, arr, printArray);
    printf("The most repetitive '%c'", res);

    return 0;
}




char sort_charArray(int size, char* ptr, void *func)
{
    int i, j, count = 0, max_count = 0;
    char most_rep = 0, temp = 0;

    for(i = 0; i < size-1 ; i++)
    {
        for (j = i+1 ; j < size ; j++)
        {
            if(ptr[i] > ptr[j])
            {
               temp = ptr[i];
               ptr[i] = ptr[j];
               ptr[j] = temp;

            }
        }
    }

    printArray(size, ptr);
    for(i = 0; i < size ; i++)
    {
        for (j = 1 ; j < size ; j++)
        {
            if (ptr[i] == ptr[j])
            {
                count++;
                if(count > max_count)
                {
                    max_count = count;
                    most_rep = ptr[i];

                }

            }

        }
        count = 0;

    }
    return most_rep;
}

void scanArray(int size, char* ptr)
{
    char i;
    printf("Enter Array elements: ");
    for (i = 0; i< size ; i++)
    {
        scanf("%s", &ptr[i]);
    }


}

void printArray(int size, char* ptr)
{
    char i=0 ;

    for (i = 0; i < size ; i++)
    {
            if (i == 0)
                printf("{%c, ", ptr[i]);
            else if (i == size-1)
                printf("%c}\n", ptr[i]);
            else
                printf("%c, ", ptr[i]);

    }
}

