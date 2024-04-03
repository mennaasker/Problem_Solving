#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Sheet 2, Problem 2

/*Write a C program to take a number and a character
from user if the number is even print the same
character, if the number is odd print the other case of
the character (a->A, B->b).*/

int main()
{
    int number;
    char character;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (number%2 == 0)
    {
        printf("'%c'", character);
    }else
    {
        if (character >= 'A' && character <= 'Z' )
        {
            printf("'%c'", (character + 32));

        }else if (character >= 'a' && character <= 'z' )
        {

          printf("'%c'", (character - 32) );

        }

    }

    return 0;
}


