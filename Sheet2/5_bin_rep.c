#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 2, Problem 5

/*write a program to print the binary representation of a
number, try not to print zeros on the left (5->print 101).*/

#define GET_BIT(var,bit) ((var>>bit)&(0x01))

int number_ofBits(int number);

int main()
{
    int num = 0, i, count = 0, bits;

    printf("Enter the data: ");
    scanf("%d", &num);


    for(i = 0 ; i < number_ofBits(num) ; i++)
    {

        printf("%d", GET_BIT(num,i));
    }

    return 0;
}


int number_ofBits(int number)
{
    return ((int)log2(number)+1);
}
