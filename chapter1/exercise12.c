/*
    Write a program that prints its input one word per line
*/

#include <stdio.h>
main()
{
    int inputChareacter;
    while((inputChareacter = getchar()) != EOF)
    {
        if(inputChareacter != ' ')
        {
            putchar(inputChareacter);
        }
        else
        {
            printf("\n");
        }
    }
}