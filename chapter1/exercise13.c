/*
    Exercise 1-13
    Write a program to print a histogram of the lengths of words in its input.
    It is easy to draw the histogram with the bars horizontal; a vertical
    orientation is more challenging.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    /* Store the input from getchar() */
    int inputCharacter;
    /* Represent the length of histogram */
    int len =0;
    while((inputCharacter = getchar()) != EOF)
    {
        if(inputCharacter != ' ' && inputCharacter != '\n')
        {   
            /* Increment the length of histogram */
            len++;
        }
        else
        {
            /* Print the length of histogram */
            printf("%d |",len);
            /* Print the histogram */
            for(int i=0;i<=len-1;i++)
            {
                putchar('X');
            }
            /* Reset the length from 0 for another histogram */
            len = 0;
            /* Print new line for another histogram */
            printf("\n");
        }
    }
    return 0;
}