#include <stdio.h>
#include <stdlib.h>

// Sheet 2, Problem 3

/*Write a program to reverse a number in decimal
representation (1205->5021).*/

int main()
{
    int number = 0, digit = 0;
    printf("Enter the number: ");
    scanf("%d", &number);

    for (int i = 0 ; i < 4 ; i++)
    {
        digit = number - ((number/10)*10);
        number = number/10;
        printf("%d", digit);
    }

    return 0;
}


