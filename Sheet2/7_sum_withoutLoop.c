#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 2, Problem 7

/*Write c code to sum numbers from 1 to 100 (without
loop).*/

int sum_withoutLoop(int num);

int main()
{
    int number = 0, res = 0 ;

    printf("Enter the data: ");
    scanf("%d", &number);

    res = sum_withoutLoop(number);
    printf("The result is %d", res);

    return 0;
}

int sum_withoutLoop(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return num+(sum_withoutLoop(num-1));
}
