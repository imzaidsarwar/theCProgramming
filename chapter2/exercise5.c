/*
    Exercise 2-4
    Write a function any(s1,s2), which returns the first location int the
    string s1 where any character from the string s2 occurs, or -1 if s1
    contains no charaters from s2. (The standard library function strpbrk
    does the same job but returns a pointer to the location.)
*/
#include<stdio.h>
#define MAXLINE 1000
int any(char s1[], char s2[])
{
    /* Searching for same element */
    for(int index1 =0; s1[index1]!='\0' &&  s1[index1]!='\n';index1++)
    {
        for(int index2 =0; s2[index2]!='\0' &&  s2[index1]!='\n';index2++)
        {
            /* If elements are same */
            if(s1[index1] == s2[index2])
            {
                /* return the index*/
                return index1;
            }
        }
    }
    /* No character is match */
    return -1;

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
        inputChar !='\n';
        index++)
    {
        /* Store the input character into str1 */
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
    char line1[MAXLINE];
    /* Character array in which contain whole input line*/
    char line2[MAXLINE];
    /* In this loop take input */
    while ((len = getLine(line1)) > 0 && (len = getLine(line2)) > 0)
    {
        /* Call the any for remove the same element */
        len = any(line1,line2);
        /* Print the input line */
        printf("%d", len);
    }
}