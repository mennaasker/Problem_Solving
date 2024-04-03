#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Sheet 2, Problem 9 -> 1

/*Write c function to take number of lines and draw
pattern with '*' like: 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/

int main()
{
    int lenght = 7 , width = 7;
    int i , j;

    for (i = 0 ; i < lenght ; i++ )
    {
        for (j = 0 ; j < width ; j++)
        {

            if(i == 0 || j == 0 || i == lenght || j == width || i <= j-1 )

                printf("* ");
        }
        printf("\n");
    }



    return 0;
}


