/*
    Exercise 1-9
    Write a program to copy its input to its output, replacing each string
    of one or more blanks by a single blank.
*/

#include <stdio.h>
main()
{
    int inputCharacter, outputCharacter;
    while((inputCharacter = getchar()) != EOF)
    {
        if(inputCharacter == ' ')
        {
            if(outputCharacter != ' ')
            {
                putchar(inputCharacter);
            }
        }
        else
        {
            putchar(inputCharacter);
        }

        outputCharacter = inputCharacter;
    }
}