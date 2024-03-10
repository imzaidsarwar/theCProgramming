/*
    Exercise 1-17
    Write a program to print all input lines that are longer than 80 characters.
*/
#include <stdio.h>
main()
{
    int inputCharacter;
    int i = 0;
    char str[] = "";
    while((inputCharacter = getchar()) != EOF)
    {
        str[i] = inputCharacter;
        i++;
    }
}