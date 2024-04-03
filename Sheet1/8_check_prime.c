#include <stdio.h>
#include <stdlib.h>

// Sheet 1, Problem 8

/*Write a program that reads a positive integer and
checks if it is a prime.*/

void check_prime(unsigned int num);

int main()
{
    unsigned int number = 0;

    printf("Enter the number ");
    scanf("%d", &number);

    check_prime(number);


    return 0;
}


void check_prime(unsigned int num)
{
    if (num%2 != 0 || num == 2 )
    {
        printf("This is prime number");
    }
    else
    {
        printf("Not prime");
    }
}


