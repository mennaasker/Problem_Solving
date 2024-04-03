#include <stdio.h>
#include <stdlib.h>

// Sheet 1, Problem 6

/*Write a program to calculate the power of a number.
The number and its power are input from user.*/

int power(int num, int power_to );


int main()
{
    int res;
    int number = 0 , pow = 0;

    printf("Enter the number ");
    scanf("%d", &number);

    printf("power to: ");
    scanf("%d", &pow);

    res = power(number , pow);

    printf("The result is = %d", res);

    return 0;
}


int power(int num, int power_to )
{
    int i, result = 1;

    for (i = 0; i < power_to ; i++)
    {
        result = result * num;
    }

    return result;
}
