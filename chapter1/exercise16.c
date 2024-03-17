/*
    Exercise 1-16
    Revise the main routine of the longest-line program so it will
    correctly print the length of arbitrarily long input lines, and
    as much as possible of the text.
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
    for(index = 0; index < MAXLINE-1 
        && 
        (inputChar = getchar())!= EOF 
        && 
        inputChar !='\n'; index++)
    {
        /* Store the input character into str */
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
