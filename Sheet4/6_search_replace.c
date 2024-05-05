#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Sheet 4, Problem 6

/*Write a C function to take 3 strings, “main string”, “find”, and “replace”, if you
find the second string inside the first one replaces it with the third and return new
string, if u didn’t find it return the first string without change
Main string->”ahmed mohamed ali kamel”.
Find->”ali”.
Replace->”ayman”.
Return new string ->”ahmed mohamed ayman kamel”.*/


char* search_replace(const char* main_string,const char* find, const char* replace);


int main()
{
    const char str_main [] = "Ahmed Mohamed Ali Kamel";
    const char str_find [] = "Ali";
    const char str_replace [] = "Aymen";


    char* res = search_replace(str_main, str_find, str_replace);

    printf("New String : %s", res);
    free(res);


    return 0;
}

char* search_replace(const char* main_string,const char* find, const char* replace)
{
    int main_length = strlen(main_string);
    int find_length = strlen(find);
    int replace_length = strlen(replace);

    char* result = (char*)malloc((main_length+1) * sizeof(char));

    strcpy(result, main_string);

    char* ptr = strstr(result, find);

    if(ptr)
    {
        int start_index = ptr - result;
        int end_index = start_index + find_length;

        char* temp = (char*)malloc((main_length + replace_length - find_length + 1)*sizeof(char));

        strncpy(temp, result, start_index);
        strcpy(temp + start_index, replace);
        strcpy(temp + start_index + replace_length, result + end_index);

        free(result);
        result = temp;

    }


    return result;
}


