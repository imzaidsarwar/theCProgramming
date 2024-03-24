/*
    Exercise 3-3
    Write a function expand(s1,s2) that expands shorthand notations like
    a-z in the string s1 into the equivalent complete list abc...xyz in
    s2. Allow for letters of either case and digits, and be prepared to 
    handle cases loke a-b-c and a-z0-9 and a-z. Arreange that a leading
    or trailing - is taken literally.
*/
#include<stdio.h>
#define MAXLINE 1000
int expand(char s1[], char s2[])
{
    /* index for trace the t */
    int indexOfs1 = 0;
    /* index for trace the s */
    int indexOfs2 = 0;
    int c =0;

    while ((c = s1[indexOfs1++]) != '\0')
    {
        if (s1[indexOfs1] == '-' && s1[indexOfs1 + 1] >= c) 
        {
            indexOfs1++;
            while (c < s1[indexOfs1])
            {
                s2[indexOfs2++] = c++;
            }
        } 
        else
        {
            s2[indexOfs2++] = c;
        }
    }
    /* store null character at the end of s*/
    s2[indexOfs2] = '\0';
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
    str[index++] = '\0';
    /* return length of input line*/
    return index;
}
int main()
{
    /* Character array in which contain whole input line*/
    char s1[MAXLINE], s2[MAXLINE];
    /* get the input */
    getLine(s1);
    /* call the escape */
    expand(s1, s2);
    /* print the string */
    printf("%s", s2);
    return 0;
}
