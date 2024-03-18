/*
    Write a program to remove trailing blanks and tabs from each line
    of input, and to delete entirely blank lines.
*/
#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
/* Function used to remove tabs and spaces */
void removeSpaceAndTabs(char str[])
{   
    /* Used for access the element of str */
    int j = strlen(str)-2;
    /* If last element of str be space or tab, it removed by 
        null character
    */
    while(j>=0 && (str[j] == ' ' || str[j] =='\t'))
    {
        str[j] = '\0';
        /* Decrement the j to access previous element */
        j--;
    }
}
/* getLine function take the input line as character by character
    and return the length of input line
*/
int getLine(char str[])
{
    /* Take the input character */
    int inputChar;
    /* represent the index of array as well as length of line */
    int index = 0;
    /* Getting input and store the input into 
        str if condition is satisfied
    */
    for(; index < MAXLINE-1 
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
        removeSpaceAndTabs(line);
        /* Print the input line */
        printf("%s", line);
    }
    return 0;
}
