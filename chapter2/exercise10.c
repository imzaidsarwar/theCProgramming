/* 
    Exercise 2-10
    Rewrite the function lower, which converts upper case letters to lower
    case, with a conditional expression instead of if-else.
*/
#include<stdio.h>
int lower(int c) 
{   
    /* Convert upper case into lower case */
    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c; 
}
int main(void) {
    int inputCharacter;

    while ((inputCharacter = getchar()) != EOF) 
    {
        /* Print the return value of lower */
        putchar(lower(inputCharacter));
    }
}

