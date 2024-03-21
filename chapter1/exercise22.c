/*
    Write a program to "fold" long input lines into two oe more shorter
    lines after the last non-blank character that occurs before the n-th
    column of input. Make sure your program does something intelligent
    with very long lines, and if there are no blanks or tabs before the
    specified column.
*/
#include<stdio.h>
/* We make the line only 50 characters */
#define MAX_SIZE_LINE 50
int main()
{
    /* Take input */
    int inputCharacter;
    /* count the character in the line */
    int count = 0;
    /* get input line */
    while((inputCharacter = getchar())!=EOF)
    {
        /* If count greater than it's maximum value  and input is space 
            or tab then print the characters in the next line
        */
        if((inputCharacter == ' ' || inputCharacter == '\t') 
            && 
            count > MAX_SIZE_LINE)
        {
            /* Print the new line */
            putchar('\n');
            /* print the characters */
            putchar(inputCharacter);
            /* Reset the count */
            count = 0;
    
        }
        /* if count less than it's maximum value and input is enter */
        else if(count < MAX_SIZE_LINE && inputCharacter == '\n')
        {
            /* Print the input */
            putchar(inputCharacter);
            /* Reset the count */
            count = 0;    
        }
        else
        {
            /* Increase the count */
            count++;
            /* Print the input */
            putchar(inputCharacter);
        }        
    }
    return 0;
}