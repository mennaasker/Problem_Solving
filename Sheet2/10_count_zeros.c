#include <stdio.h>
#include <stdlib.h>

// Sheet 2, Problem 10

/*Write c function to count the max number of zeros
between two ones in the binary representation of a
number (296384-> {1001000010111000000} return 4).*/

int Max_Zeros(int number);

int main()
{

    int num = 0 ;
    int res = 0;

    printf("Enter the Number: ");
    scanf("%d", &num);

    res = Max_Zeros(num);
    printf("The maximum number of zeros between two ones is %d", res);


    return 0;
}


int Max_Zeros(int number)
{
   int count = 0, max_Count = 0, one_Flag = 0;

    for (int i = 1 ; i < 32 ; i++)
    {
        if (number&1)
        {
                one_Flag = 1;
                if(one_Flag)
                {
                    if (count >= max_Count)
                        max_Count = count;
                }
                count = 0;
        }

        else
        {
            if (one_Flag)
                count++;
        }

        number = number>>1;
   }

    return max_Count;
}
