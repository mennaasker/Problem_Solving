#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 2, Problem 6

/*Write c code to reverse bits in an 8-bit number
(149->10010101 return 169->10101001),
(5->00000101 return 160->10100000).*/

#define GET_BIT(var,bit) ((var>>bit)&(0x01))


int main()
{
    int num = 0, i, count = 0;

    printf("Enter the data: ");
    scanf("%d", &num);


    for(i = 7 ; i >= 0 ; i--)
    {

        printf("%d", GET_BIT(num,i));
    }

    return 0;
}