/*
    Exercise 1-6
    Verify that expression getchar() != EOF is 0 or 1
*/
#include <stdio.h>
main()
{
    int character;
    while((character = getchar()) != EOF)
    {
        putchar(character);
    }
}
