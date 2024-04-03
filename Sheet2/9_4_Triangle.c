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
    int lenght = 6 ;
    int i , j;

    for (i = 0 ; i <= lenght/2 ; i++ )
    {

        for (j = 0 ; j <= lenght ; j++)
        {

            if(i == lenght/2 || j == lenght/2 || i+j == lenght/2 ||
               (i+j == lenght-2 && j <= lenght/2) || (j >= lenght/2 && (j-i == lenght/2-1 || j-i == lenght/2)))   // not optimized
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


