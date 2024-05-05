#include <stdio.h>
#include <stdlib.h>


//Sheet 5, Problem 9

/*Write a c function to swap the two bytes of a short int (n=0xFE20 -> 0X20FE)
use 2 methods.*/

short int swap_TwoBytes1(short int num);
short int swap_TwoBytes2(short int num);



int main()
{

    short int number = 0xFE20, first_method = 0,second_method = 0;

    printf("Number before swapping 0x%X\n", number);
    first_method = swap_TwoBytes1(number);
    second_method = swap_TwoBytes2(number);
    printf("Number after swapping First method 0x%X\n", first_method);
    printf("Number after swapping second method 0x%X\n", second_method);

    return 0;

}

short int swap_TwoBytes1(short int num)
{
    // First Method
    short int lower_byte =0;
    short int higher_byte =0;

    lower_byte = ((num&0xFFFF)>>8);
    higher_byte = ((num&0xFFFF)<<8);

    return lower_byte|higher_byte;

}


short int swap_TwoBytes2(short int num)
{
    // Second Method

    return ((num&0xFFFF)>>8)|((num&0xFFFF)<<8);

}

