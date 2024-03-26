/*
    Write a program to remove all comments from a C program . Don't
    forget to handle quoted strings and character constant properly. C
    comment do not nest.
*/

#include <stdio.h>
void echo_quote(int inputCharacter) 
{
    int nextInputCharacter;

    putchar(inputCharacter);

    while ((nextInputCharacter = getchar()) != inputCharacter) 
    {
        putchar(nextInputCharacter);

        if (nextInputCharacter == '\\')
        {
            putchar(getchar());
        }
            
    }
    putchar(nextInputCharacter);
}
void inComment() 
{
    int inputCharacter, nextInputCharacter;

    inputCharacter = getchar();
    nextInputCharacter = getchar();

    while (inputCharacter != '*' || nextInputCharacter != '/') 
    {
        inputCharacter = nextInputCharacter;
        nextInputCharacter = getchar();
    }
}
void removeComment(int inputCharacter) 
{
    int nextInputCharacter;

    if (inputCharacter == '/') 
    {
        if ((nextInputCharacter = getchar()) == '*')
        {
            inComment();
        }         
        else if (nextInputCharacter == '/') 
        {
            putchar(inputCharacter);
            removeComment(nextInputCharacter);
        } 
        else 
        {
            putchar(inputCharacter);
            putchar(nextInputCharacter);
        }
    } 
    else if (inputCharacter == '\'' || inputCharacter == '"')
    {
        echo_quote(inputCharacter);
    }
    else
    {
        putchar(inputCharacter);
    }
        
}
int main() 
{
    int inputCharacter;

    printf(" To Check /* Quoted String */ \n");

    while ((inputCharacter = getchar()) != EOF)
    {
        removeComment(inputCharacter);
    }
    return 0;
}





