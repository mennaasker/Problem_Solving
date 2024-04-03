#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Sheet 2, Problem 9 -> 2

/*
Write c function to take number of lines and draw
pattern with '*' like:
* 
* *
* * *
* * * *
* * * * *
*/

int main()
{
    int lenght = 5 , width = 5;
    int i , j;

    for (i = lenght ; i > 0 ; i-- )
    {
        for (j = width ; j > 0 ; j--)
        {

            if(i == 0 || j == 0 || j == width || i <= j )

                printf("* ");
        }
        printf("\n");
    }



    return 0;
}


