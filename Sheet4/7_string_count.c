#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Sheet 4, Problem 7

/*Write a C code to take string "hi,5,hello,12" and print the first word number of
times as the first number ,and second word as the second number.*/


void search_replace(const char* enterd_string);


int main()
{
    const char str [] = "hi,5,hello,12";


    search_replace(str);


    return 0;
}

void search_replace(const char* enterd_string)
{

    char*temp;
    char* first_count = 0;
    char* second_count = 0;
    char* first_word ;
    char* second_word ;
    int count = 0;
    int count1=0,count2 =0;

    temp = strtok(enterd_string, ",");
    first_word = temp;

	while(temp != NULL)
	{
		//printf("%s\n", temp);
		temp = strtok(NULL, ",");
		count++;

		switch(count)
		{

            case 1:
            first_count = temp;
            break;

            case 2:
            second_word = temp;
            break;

            case 3:
            second_count = temp;
            break;
		}

	}

    sscanf(first_count, "%d", &count1);
    sscanf(second_count, "%d", &count2);


    for(int i = 0; i < count1 ; i++)
    {
        printf("%s\n", first_word);
    }

        for(int i = 0; i < count2 ; i++)
    {
        printf("%s\n", second_word);
    }
}


