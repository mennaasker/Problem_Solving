#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 16

/*Write a C function to get the nth term of Fibonacci series, and use it
to print the first 20 element.*/

int Fibonacci(int num);
void print_series(int* func);


int main()
{
    int number = 0, res = 0;
    printf("Enter number: ");
    scanf("%d", &number);

    res = Fibonacci(number);
    printf("The Fibonacci value is %d\n", res);


    print_series(Fibonacci);
    return 0;
}



int Fibonacci(int num)
{
    int result = 0;


    result = (1/sqrt(5))*(pow(((1+sqrt(5))/2), num)- pow(((1-sqrt(5))/2), num));

    return result;
}

void print_series(int* func)
{
        for (int i = 0; i < 20 ; i++)
    {
            if (i == 0)
                printf("{%d, ", Fibonacci(i));
            else if (i == 19)
                printf("%d}\n", Fibonacci(i));
            else
                printf("%d, ", Fibonacci(i));

    }
}
