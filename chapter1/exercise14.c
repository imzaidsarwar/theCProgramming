/*
    Exercise 1-14
    Write a program to print a histogram of the frequencies of different
    characters in its input.

    Our program have some limitations
        1. We not include spaces, tabs, symbols, and special characters
        2. We consider equal lowercase and uppercase character.
*/
#include <stdio.h>
#include <string.h>
/* Store the input from getchar() */
int inputCharacter;
/* Represent the characters */
char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'};
/* Represent the count of each character of input */
int count[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void printHistogram()
{
    for(int i=0; i<26; i++)
    {
        if(count[i]!=0)
        {
            /* Print the character */
            printf("%c |",arr[i]);
            /* Print the histogram */
            for(int j =0;j<=count[i]-1;j++)
            {
                putchar('X');
            }
            /* Print new line for next character */
            printf("\n");
        }
    }
}
int main()
{
    /* Getting the input */
    while((inputCharacter = getchar()) != EOF)
    {
        if(inputCharacter != ' ')
        {   
            for(int i=0; i<26; i++)
            {
                /* We treat uppercase and lowercase character as same */
                if(arr[i] == inputCharacter || arr[i] - 32 == inputCharacter)
                {
                    /* Increment the count of character */
                    count[i] = count[i] + 1;
                    break;
                }
            }
        }        
    }
    /* call for print the histogram */
    printHistogram();
    return 0;
}