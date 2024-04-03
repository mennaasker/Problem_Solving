#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 4

/*Write a C function that take two numbers and return array contain all
numbers between the two given numbers. (numbers 2,6->return array
contain [3,4,5]).*/

int *arr;

int printArray(int num1, int num2);
void print_arr(int size, int* ptr);

int main()
{
    int number1 = 0, number2 = 0, size = 0;

    printf("Enter numbers: ");
    scanf("%d %d", &number1, &number2);

    size = ((number2 - number1)-1);
    arr = (int*)(malloc(size*sizeof(int)));

    arr = printArray(number1, number2);


    print_arr(size, arr);

    return 0;
}


int printArray(int num1, int num2)
{
    int i = 0;
    for(num1+1 ; num1 < num2; num1++)
    {
            arr[i] = num1+1;
            i++;

    }

    return arr;
}

void print_arr(int size, int* ptr)
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
