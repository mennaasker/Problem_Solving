#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 17

/*Write a C function to take 10 mono numbers (from 0to 9) from user
and return the most repeated one, if user enter number bigger than 9
return -1(don't use arrays).*/

int counter = 0;

int most_repLess10(unsigned int num);


int main()
{
    unsigned int number = 0, res = 0;

    res = most_repLess10(number);
    printf("%d", res);



    return 0;
}




int most_repLess10(unsigned int num)
{

    num = 0;
    int count[10] = {0}, most_rep = 0;

       while(counter != 10)
    {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num < 10)
        {
            switch(num)
            {
                case 0:
                    count[0] = count[0] + 1;
                    break;

                case 1:
                    count[1] = count[1] + 1;
                    break;

                case 2:
                    count[2] = count[2] + 1;
                    break;

                case 3:
                    count[3] = count[3] + 1;
                    break;

                case 4:
                    count[4] = count[4] + 1;
                    break;

                case 5:
                    count[5] = count[5] + 1;
                    break;

                case 6:
                    count[6] = count[6] + 1;
                    break;

                case 7:
                    count[7] = count[7] + 1;
                    break;

                case 8:
                    count[8] = count[8] + 1;
                    break;

                case 9:
                    count[9] = count[9] + 1;
                    break;

                default:
                break;

            }
        }
        else
        {
            return -1;
        }


        counter++;



    }

    for(int i = 0; i<10-1 ; i++)
    {
        for(int j=1+i ; j<10 ; j++)
        {
            if(count[i] > count[j] && count[i] > count[most_rep])
            {
                most_rep = i;

            }

        }

    }

    return most_rep;

}


