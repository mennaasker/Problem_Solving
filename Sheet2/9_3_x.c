#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Sheet 2, Problem 9 -> 3

/*
Write c function to take number of lines and draw
pattern with '*' like:
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
*/

int main()
{
    int lenght = 8 , width = 8;
    int i , j;

    for (i = 0 ; i <= lenght ; i++ )
    {

        for (j = 0 ; j <= width ; j++)
        {

            if(i == j || i+j == lenght)
            {
                 printf("*");
            }
            else
            {
                printf(" ");
            }

        }

        printf("\n");
    }



    return 0;
}


