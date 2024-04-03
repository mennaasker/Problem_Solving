#include <stdio.h>
#include <stdlib.h>

// Sheet 1, Problem 7

/*Write a program that reads a positive integer and
computes the factorial.*/

int factorial_method1(unsigned int num);

int factorial_method2(unsigned int num);


int main()
{
    int res1 = 0, res2 = 0;
    unsigned int number = 0;

    printf("Enter the number ");
    scanf("%d", &number);

    res1 = factorial_method1(number);

    res2 = factorial_method2(number);

    printf("The result is = %d", res1);
    printf("\nThe result is = %d", res2);
    return 0;
}


int factorial_method2(unsigned int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }

    return num*factorial_method2(num-1);
}

int factorial_method1(unsigned int num)
{
    int i,result = 1;
    for (i = 1; i<= num ; i++)
    {
        result = result*i;

    }

    return result;
}

