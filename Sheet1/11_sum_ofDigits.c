#include <stdio.h>
#include <stdlib.h>

// Sheet 1, Problem 11

/*Write a program to sum the digits in a decimal number
145 -> 1+4+5=10.*/

int sum_ofDigits(int num);

int main()
{
    int number = 0, res =0;

    printf("Enter the number ");
    scanf("%d", &number);

    res = sum_ofDigits(number);
    printf("The result is %d", res);

    return 0;
}


int sum_ofDigits(int num)
{

  int sum =0;
  int digit =0;
  for (int i = 0 ; i< 3 ; i++)
  {
    digit = num - (num/10)*10;
    num = num/10;
    sum = sum + digit;
  }

  return sum;

}


