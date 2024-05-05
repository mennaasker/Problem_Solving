#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


//Sheet 5, Problem 7 chatgpt aided

/*Write c function to copy string to string without copy repeated characters
try (O(n)). "ahmed selem kamel"->"ahmed slk".*/

#define size 256

void erase_RepeatedChar(const char* input_ptr, char* output_ptr);


int main()
{
    const char* input_str = "ahmed selem kamel";
    char output_str[size];

    erase_RepeatedChar(input_str, output_str);

    printf("Input string: %s\n", input_str);
    printf("Output string: %s\n", output_str);

    return 0;

}

void erase_RepeatedChar(const char* input_ptr, char* output_ptr)
{
    bool encountered[256] = {false};


    int input_length = strlen(input_ptr), i ;
    int output_index = 0;

    for(i = 0 ; i < input_length ; i++)
    {
        char check_char = input_ptr[i];

        if(!encountered[check_char])
        {
            output_ptr[output_index++] = check_char;
            encountered[check_char] = true;
        }
    }

    output_ptr[output_index] = '\0';
}




