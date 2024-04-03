#include <stdio.h>
#include <stdlib.h>

// sheet 1, Problem 1

/*Write a program to take 2 numbers from user and
calculate sum of all numbers between them.*/

int main()
{
    int num1 = 0,num2 = 0;

    printf("Enter the first Number: ");
    scanf("%d", &num1);
    printf("Enter the second Number: ");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        for (num1 ; num1 <= num2 ; num1++)
        {
            printf("%d ", num1);
        }

    }
    else if (num1 > num2)
    {

        for (num2 ; num2 <= num1 ; num2++)
        {
            printf("%d ", num2);
        }
    }
    else
    {
        printf("%d", num1);
    }


    return 0;
}