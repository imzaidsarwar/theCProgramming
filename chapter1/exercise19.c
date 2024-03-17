/*
    Write a function reverse(s) that reverse the character string
    s. Use it to write a program that reverses its input a line at
    a time.
*/

#include <stdio.h>
#include<string.h>
#define MAXLINE 1000
/* Swap the value */
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
/* reverse the string */
void reverseString(char reverseString[])
{
    int i = 0;
    /* store the last index of character string */
    int j = strlen(reverseString) - 1;
    while(i<j)
    {
        /* Call the swap function */
        swap(&reverseString[i],&reverseString[j]);
        /* Increment the staring index to reach the next element */
        i++;
        /* Decrement the last index to reach the previous element */
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
        /* Reverse the string */
        reverseString(line);
        /* Print the input line */
        printf("%s", line);
    }
    return 0;
}
