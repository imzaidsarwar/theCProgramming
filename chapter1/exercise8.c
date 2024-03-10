/*
    Exercise 1-8
    Write a program to count blanks, tabs, and newlines
*/
#include <stdio.h>
main()
{
    int blankSpace = 0; 
    int tabs = 0;
    int newlines = 0;
    int charater;
    while((charater = getchar()) != EOF)
    {
        if(charater == ' ')
        {
            blankSpace++;
        }
        else if(charater == '\t')
        {
            tabs++;
        }
        else if(charater == '\n')
        {
            newlines++;
        }
    }
    printf("%d %d %d\n",blankSpace,tabs,newlines);
}