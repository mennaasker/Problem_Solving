#include <stdio.h>
#include <stdlib.h>

// Sheet 1, Problem 13

/*You are designing a poster which prints out numbers
with a unique style applied to each of them. The styling
is based on the number of closed paths or holes present
in a giver number. The number of holes that each of the
digits from 0 to 9 have are equal to the number of
closed paths in the digit. Their values are:
1, 2, 3, 5 and 7 = 0 holes.
0, 4, 6, and 9 = 1 hole.

8 = 2 holes.
Example if number 3824->3 has 0 holes,8 has 2
holes,4 has 1hole sum=0+2+1=3.*/

int main()
{
    int  num = 0 , digit = 0, sum = 0, hole = 0;
    printf("Enter number ");
    scanf("%d", &num);


    for (int i = 0 ; i < 4 ; i++)
    {
        digit = num - (num/10)*10;

        if (digit == 1 || digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            hole = 0;

        }else if(digit == 0 || digit == 4 || digit == 6 || digit == 9)
        {
            hole = 1;

        }else if(digit == 8)
        {
            hole = 2;

        }

        num = num/10;
        sum = sum + hole;
    }
    printf("\nThe sum: %d", sum);

    return 0;
}


