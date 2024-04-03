#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 2, Problem 11

/*Given two integers: L and R, Find the maximal value of A
xor B where A and B satisfy the condition L =< A <= B <=
R Constrains: 1 <= L <= R <= 1000 Input format: the
input contains two lines first line contains L and next
line contains R. Output format: The maximum value of
Axor B.*/

int main()
{
    int L, R;
    int XOR_value = 0, Max_value = 0;

    for (L = 10 ; L <= 15 ; L++ )
    {
        for (R = L ; R <= 15 ; R++)
        {
            XOR_value = L^R;
            Max_value = (XOR_value > Max_value)? XOR_value : Max_value;
        }


    }

    printf("The maximum value is %d", Max_value);


    return 0;
}


