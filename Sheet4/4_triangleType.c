#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Sheet 4, Problem 4

/*Write C function to take string contain three numbers separated by space,
check what type of triangle this number could make, and return string
"12 23 21 "
"Equilateral triangle " "Isosceles triangle"
"Scalene triangle" "Not triangle"*/


char* triangle_type(const char* ptr);


int main()
{
    int size = 0;
    const char* str  = "12 23 21";


    char* triangle_res = triangle_type(str);

    printf("Triangle type: %s\n", triangle_res);

    free(triangle_res);  // Remember to free the allocated memory

    return 0;
}

char* triangle_type(const char* ptr)
{
    char* result = malloc(100 * sizeof(char));

    int a = 0 ,b = 0 ,c = 0;

    sscanf(ptr, "%d %d %d", &a, &b, &c);


    if(a == 0 || b == 0 || c == 0 )
    {
        strcpy(result, "Not triangle");
    }
    else if( a == b &&  a == c )
    {
        strcpy(result, "Equilateral triangle");
    }

    else if( (a == b || a == c) || b == c )
    {
       strcpy(result,"Isosceles triangle");
    }

    else if( a != b && b != c && a != c )
    {
       strcpy(result, "Scalene triangle");
    }

    return result;

}

