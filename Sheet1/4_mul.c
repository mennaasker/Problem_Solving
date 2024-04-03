#include <stdio.h>
#include <stdlib.h>

// sheet 1, Problem 4

/*Write a program that take two numbers and multiply
them without using * operation.*/

int mul(int num1, int num2 );


int main()
{
    int res;
    int oprend1 = 0 , operand2 = 0;

    printf("Enter the first number ");
    scanf("%d", &oprend1);

    printf("Enter the second number ");
    scanf("%d", &operand2);

    res = mul(oprend1, operand2);

    printf("The multiplication is = %d", res);

    return 0;
}


int mul(int num1, int num2)
{
    int i, result = 0;

    for(i = 0; i< num2 ; i++)
    {
     result = result + num1;
    }
    return result;
}
