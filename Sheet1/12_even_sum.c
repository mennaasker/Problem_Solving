#include <stdio.h>
#include <stdlib.h>

// Sheet 1, Problem 12

/*write a program to take even numbers from user and
print the sum of them after each entry if the user enters
2 odd number the program print "bye" and stopped.*/

int main()
{
    int number = 0, sum =0 , counter = 0;


    while (1)
    {
        printf("Enter number ");
        scanf("%d", &number);
        if(number%2 ==0)
        {
            sum = sum + number;
            printf("The summation = %d\n", sum);
        }else
        {   counter++;
            if (counter == 2)
            {
                printf("bye!");
                return 0;
            }
            printf("The summation = %d\n", sum);
        }
    }

    return 0;
}


