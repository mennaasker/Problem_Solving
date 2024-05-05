#include <stdio.h>
#include <stdlib.h>


//Sheet 4, Problem 5

/*Write a C function to convert float number to string
Float f1=3.45 to string str=”3.45”.*/


void float_toString(char* ptr, float num);


int main()
{
    float f1 = 3.45;
    char str[10];

    printf("%f\n", f1);
    float_toString(str, f1);
    printf("%s", str);




    return 0;
}

void float_toString(char* ptr, float num)
{
    sprintf(ptr,"%.2f" ,num);

}


