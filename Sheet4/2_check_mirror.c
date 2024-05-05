#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sheet 4, Problem 2

/*Write c function to check if string is mirror or not "SalaS","SalelaS".*/


void check_mirror(char* ptr, int string_size);
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

    check_mirror(str, str_size);



    return 0;
}


void check_mirror(char* ptr, int string_size)
{
    int counter = 0;
    for(int i = 1 ; i < string_size/2 ; i++)
    {
        if (ptr[i] == ptr[string_size-i])
        {
            counter++;
        }else
        {
            printf(" Not Mirror");
            return ;
        }

    }

    if(counter == ((string_size-2)/2))
        printf("Mirror");
}

// string index starts from 1?

void scan_String(char* ptr, int string_size)
{
    for(int i = 0; i < string_size ; i++)
    {
        scanf("%c", &ptr[i]);
    }
}

void print_String(char* ptr, int string_size)
{
    for(int i = 0 ; i < string_size ; i++)
    {
        printf("%c", ptr[i]);
    }
}

