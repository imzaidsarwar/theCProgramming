/*
    Exercise 3-2
    Write a function escape(s,t) that converts characters like newline
    and tab into visible escape sequences like \n and \t as it copies the
    string t to s. Use a switch. Write a fnction for the other direction
    as well converting escape sequence into the real characters.
*/
#include<stdio.h>
#define MAXLINE 1000
int escape(char s[], char t[])
{
    /* index for trace the t */
    int indexOft = 0;
    /* index for trace the s */
    int indexOfs = 0;
    while(t[indexOft]!='\0')
    {
        switch(t[indexOft])
        {
            /* case of tab */
            case '\t':
                s[indexOfs++] = '\\';
                s[indexOfs] = 't';
                break;
            /* case of newline */
            case '\n':
                s[indexOfs++] = '\\';
                s[indexOfs] = 'n';
                break;
            /* default case store t[i] into s[indexOfS] */
            default:
                s[indexOfs] = t[indexOft];
                break;
        }
        /* Increase the index */
        indexOfs++;
        /* Increase the index */
        indexOft++; 
    }
    /* store null character at the end of s*/
    s[indexOfs] = '\0';
}
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
    /* Character array in which contain whole input line*/
    char s[MAXLINE], t[MAXLINE];
    /* get the input */
    getLine(t);
    /* call the escape */
    escape(s, t);
    /* print the string */
    printf("%s", s);
    return 0;
}
