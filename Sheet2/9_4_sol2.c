#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 2, Problem 9 -> 4

/*
Write c function to take number of lines and draw
pattern with '*' like:
   *   
  ***
 *****
*******
*/

int main()
{
    int row = 4 ;
    int i , space, asterisk;

    for (i = 1 ; i <= row ; i++ )
    {

        for (space = 0 ; space < row - i ; space++)
        {
            printf(" ");

        }

        for (asterisk = 0 ; asterisk < i*2-1 ; asterisk++)
        {
            printf("*");

        }

        printf("\n");
    }



    return 0;
}


