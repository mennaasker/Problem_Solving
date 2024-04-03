#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 3

/*Write a C function that return 0 if a given number is a power of 3,
otherwise return 1.*/

int ckeck_pow_3(int num);

int main()
{
    int number = 0, res = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    res = ckeck_pow_3(number);
    printf("%d", res);

    return 0;
}


int ckeck_pow_3(int num)
{
    if (num == ( pow( (num/3),3 ) ) )
    {
        return 0;
    }

    else
    {
        return 1;
    }

}
