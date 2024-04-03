#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 2, Problem 8

/*Write a full C program to take 4 choose from user:
1-Set bit.
2-Clear bit
3-Toggle bit.
4-Read bit.*/

#define GET_BIT(VAR,BIT) ((VAR>>BIT)&(0x01))

#define SET_BIT(VAR,BIT) (VAR|=(0x01<<BIT))

#define CLR_BIT(VAR,BIT) (VAR&=~(0x01<<BIT))

#define TOGGLE_BIT(VAR,BIT) (VAR^=(0x01<<BIT))

int main()
{
    int num = 0, bit = 0, opr = 0;

    printf("choose the operation\n 1.SET BIT\n 2.CLEAR BIT\n 3.TOGGLE BIT\n 4.READ BIT\n");
    scanf("%d", &opr);

    printf("Enter the number and the bit: ");
    scanf("%d %d", &num, &bit);

    switch(opr)
    {
        case 1:
            SET_BIT(num,bit);
            printf("The number after Setting bit %d is %d", bit,num);
            break;

        case 2:
            CLR_BIT(num,bit);
            printf("The number after Clearing bit %d is %d", bit,num);
            break;

        case 3:
            TOGGLE_BIT(num,bit);
            printf("The number after Toggling bit %d is %d", bit,num);
            break;

        case 4:
            printf("Bit %d contains %d", bit ,GET_BIT(num,bit));
            break;
    }



    return 0;
}


