#include <stdio.h>
#include <stdlib.h>

// Sheet 1, Problem 5

/*Write a program that take two numbers and calculate
the reminder without using % operation.*/

int reminder(int num1, int num2 );


int main()
{
    int res;
    int oprend1 = 0 , operand2 = 0;

    printf("Enter the first number ");
    scanf("%d", &oprend1);

    printf("Enter the second number ");
    scanf("%d", &operand2);

    res = reminder(oprend1, operand2);

    printf("The reminder is = %d", res);

    return 0;
}


int reminder(int num1, int num2 )
{
    int i, rmind = 0;
    int result = 0;

    result = num1/num2;
    rmind = num1 - (result * num2);

    return rmind;
}
