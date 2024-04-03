#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 16

/*Write a C function to get the nth term of Fibonacci series, and use it
to print the first 20 element.*/

int Fibonacci(int num);
void print_series(int nem, int* func);


int main()
{
    int number = 0, res = 0;
    printf("Enter number: ");
    scanf("%d", &number);

    res = Fibonacci(number);
    printf("The Fibonacci value is %d\n", res);


    print_series(20 , Fibonacci);
    return 0;
}



int Fibonacci(int num)
{
    int i, result = 0;

    int F0 = 0, F1 = 1;

    for (i = 2; i <= num ; i++)
    {
        result = F0+F1;
        F0 = F1;
        F1 = result;
    }

    return result;
}

void print_series(int num, int* func)
{
        for (int i = 0; i < num ; i++)
    {
            if (i == 0)
                printf("{%d, ", Fibonacci(i));
            else if (i == num-1)
                printf("%d}\n", Fibonacci(i));
            else
                printf("%d, ", Fibonacci(i));

    }
}
