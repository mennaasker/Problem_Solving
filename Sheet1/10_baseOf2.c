#include <stdio.h>
#include <stdlib.h>

// Sheet 1, Problem 10
/*Write a program that reads a positive integer and check
if this number is a base of 2 like 1,2,4,8,16,32, 64...*/

void check_baseOf2(unsigned int num);

int main()
{
    unsigned int number = 0;

    printf("Enter the number ");
    scanf("%d", &number);

    check_baseOf2(number);


    return 0;
}


void check_baseOf2(unsigned int num)
{
    int i;

    for(i = 0 ; i<=num/2 ; i++)
    {
        if (num == pow(2,i))
        {
        printf("%d is a base of 2 ", num);
        return;
        }
    }

    printf("%d is not a base of 2 ", num);


}


