#include <stdio.h>
#include <stdlib.h>

//Sheet 1, Problem 9

/*Write a program that reads a positive integer and
checks if it is a perfect square.*/

void check_perfectSquare(unsigned int num);

int main()
{
    unsigned int number = 0;

    printf("Enter the number ");
    scanf("%d", &number);

    check_perfectSquare(number);


    return 0;
}


void check_perfectSquare(unsigned int num)
{
    unsigned int check = pow(num,0.5);

    if (num == (check * check))
    {
        printf("%d is a Perfect Square ", num);
    }else
    {
        printf("%d is not a Perfect Square", num);
    }

}


