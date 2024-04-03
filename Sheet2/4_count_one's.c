#include <stdio.h>
#include <stdlib.h>

//Sheet 2, Problem 4

/*Write a program to count the number of 1’s in an
unsigned 32-bit integer.*/

#define GET_BIT(var,bit) ((var>>bit)&(0x01))

int main()
{
    unsigned int num = 0x00, i, count = 0;

    printf("Enter the data: ");
    scanf("%d", &num);


    for(i = 0 ; i < 32 ; i++)
    {
        if (GET_BIT(num,i))
        {
            count++;
        }
    }
    printf("Number of one's is %d", count);
    return 0;
}
