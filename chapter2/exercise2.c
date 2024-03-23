/*
    Exercise 2-2
    for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    Write a loop equivalent to the for loop above without with out using
    && and ||.
*/
#include <stdio.h>
#define MAXLINE 1000
/* getLine function take the input line as character by character
    and return the length of input line
*/
int getLine(char str[])
{
    /* Take the input character */
    int inputChar;
    /* represent the index of array as well as length of line */
    int index;
    /* Getting input and store the input into 
        str if condition is satisfied
    */
    for (index = 0; index < MAXLINE - 1; index++) 
    {
        /* Take the input */
        inputChar = getchar();
        /* If input is equal to EOF than break the loop */
        if (inputChar == EOF)
        {
            break;
        }
        /* If input is equal to newline than break the loop */
        if (inputChar == '\n')
        {
            break;
        }
        /* store the input into str at index */
        str[index] = inputChar;
    }    
    if(inputChar == '\n')
    {
        /* Store the input character into str */
        str[index] = inputChar;
        /* Increment the index OR length */
        index++;
    }
    /* Store null character in last of str*/
    str[index] = '\0';
    /* return length of input line*/
    return index;
}
int main()
{
    /* Present total length of input line */
    int len;
    /* Character array in which contain whole input line*/
    char line[MAXLINE];
    /* In this loop take input */
    while ((len = getLine(line)) > 0)
    {
        /* Print the input line */
        printf("%s", line);
    }
    return 0;
}
