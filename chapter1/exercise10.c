/*
    Exercise 1-10
    Write a program to copy its input to its output, replacing each tabs by /t, 
    each backspace by /b, and each backslash by \\. This makes tabs and backspace
    visible in an unambiguous way.
*/
#include <stdio.h>
main()
{
    int inputCharacter;
    while((inputCharacter = getchar()) != EOF)
    {
        if(inputCharacter == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if(inputCharacter == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else
        {
            putchar(inputCharacter);
        }
    }
}