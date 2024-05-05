#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 4, Problem 1

/*Write c function to reverse string "Ahmed salem"->melas demhA".*/

#define size 20

void scan_String(char* ptr, int string_size);
void print_String(char* ptr, int string_size);

int main()
{
    char* str = NULL;
    int str_size = 0;

    printf("Enter string size: ");
    scanf("%d", &str_size);

    str = (char*)malloc(str_size*(sizeof(char)));

    printf("Enter the string: ");
    scan_String(str, str_size);

    print_String(str, str_size);



    return 0;
}

void scan_String(char* ptr, int string_size)
{
    for(int i = 0; i < string_size ; i++)
    {
        scanf("%c", &ptr[i]);
    }
}

void print_String(char* ptr, int string_size)
{
    for(int i = string_size-1 ; i > 0 ; i--)
    {
        printf("%c", ptr[i]);
    }
}

