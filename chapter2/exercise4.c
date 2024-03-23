/* 
    Exercise 2-4
    Write an alternate version of squeeze(s1,s2) that deletes each
    character in s1 that matches any character in the string s2.
    
    limitation we replace the same character with #
*/
#include<stdio.h>
#define MAXLINE 1000
void squeeze(char s1[], char s2[])
{
    for(int i =0; s1[i]!='\0';i++)
    {
        for(int j =0; s1[j]!='\0';j++)
        {
            if(s1[i] == s2[j])
            {
                s1[i] = '#';
            }
        }
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
        /* Call the squeeze for remove the same element */
        squeeze(line1,line2);
        /* Print the input line */
        printf("%s", line1);
    }
}