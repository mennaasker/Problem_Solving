#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 3, Problem 15

/*Write a C Function that swaps two pointers.*/


void swap_pointer(int** ptr1, int** ptr2);


int main()
{
    int x = 10, y =11;
    int **pp1 = &x, **pp2 = &y ;
    printf("%d -> %d, %d -> %d\n", *pp1, &pp1, *pp2, &pp2);
    swap_pointer(pp1,pp2);
    printf("%d -> %d, %d -> %d", *pp1, &pp1, *pp2, &pp2);


    return 0;
}



void swap_pointer(int** ptr1, int** ptr2)
{
    int* temp = NULL;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

