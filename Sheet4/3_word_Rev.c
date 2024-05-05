#include <stdio.h>
#include <stdlib.h>


//Sheet 4, Problem 3 "chatgpt aid"

/*Write c function to reverse words in sentence (without using external arrays)
" I work as an embedded software engineer for 3 years"
-> " years 3 for engineer software embedded an as work I".*/


void rev_word(char* ptr);


int main()
{
    char str[] = "I work as an embedded software engineer for 3 years" ;

    printf("%s\n", str);
    rev_word(str);
    printf("%s", str);



    return 0;
}

void rev_word(char* ptr)
{
    char* start = ptr;
    char* end = ptr;

    // start pointer point to first character and make end pointer point to last character
    while(*end != '\0')
    {
        end++;
    }
    end--;

    // reverse all words
    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;

    }

    //reverse each word
    start = ptr;
    end = ptr;

    while(*end != '\0')
    {
        if(*end == ' ')
        {
            char* startWord = start;
            char* endWord = end-1;

            while(startWord < endWord)
            {
                char temp = *startWord;
                *startWord = *endWord;
                *endWord = temp;

                startWord++;
                endWord--;

            }

            start = end + 1;
        }

        end++;
    }

        // Reverse the last word
        char* wordStart = start;
        char* wordEnd = end - 1;

        while (wordStart < wordEnd) {
            char temp = *wordStart;
            *wordStart = *wordEnd;
            *wordEnd = temp;
            wordStart++;
            wordEnd--;
        }

}


