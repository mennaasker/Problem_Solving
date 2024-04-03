#include <stdio.h>
#include <stdlib.h>

// Sheet 2, Problem 1

/*Write a program that reads the radius of a circle and
calculates the area and circumference.*/

#define pi 3.14

void circle(float red);

int main()
{
    float  redius = 0.0;
    printf("Enter number ");
    scanf("%f", &redius);

    circle(redius);

    return 0;
}


void circle(float red)
{
    float area = 0 , circumference = 0;

    area = (pow(red,2)*3.14);

    circumference = (2*3.14*red);

    printf("The area %.2f and the circumference %.2f.", area, circumference);
}
