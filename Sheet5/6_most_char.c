#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Sheet 5, Problem 6

/*Write c function to find the first repeated char in string (try in O(n)).
"ahmed selem" ->e.*/

#define size 12

char find_firstRepeatedchar(char* ptr, char ptr_size);


int main()
{
    char str[size] = "ahmed selem", res = 0;

    res = find_firstRepeatedchar(str,size);
    printf("The first repeated char: '%c'\n", res);

    return 0;
}

char find_firstRepeatedchar(char* ptr, char ptr_size)
{
    int rep_char = 0, i, j;
    for(i = 0; i < ptr_size-2 ; i++)
    {
        for(j = 1+i ; j < ptr_size-1 ; j++)
        {
            if(ptr[i] == ptr[j])
            {
                rep_char = ptr[i];
            }
        }
    }

    return rep_char;

}


