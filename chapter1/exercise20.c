/*
    Exercise 1-20
    Write a program detab that replaces tabs in the input with the proper
    number of blanks to space to the next tab stop. Assume the fixed set
    of tab stops, say every n columns. Should n be a variable or a 
    symbolic parameters?
*/
#include<stdio.h>
/* number of spaces which make a TAB */
#define TAB 8

int main(void) {
    int numberOfBlanks = 0;
    int position = 1;
    int inputCharacter;

    /* Get the input character */
    while ((inputCharacter = getchar()) != EOF) 
    {
        /* If inputCharacter is equal to tab */
        if (inputCharacter == '\t') 
        {
            /* Calculate the numberOfBlanks */
            numberOfBlanks = TAB - ((position - 1) % TAB);
            /* Replace tab from # if numberOfBlanks > 0*/
            while (numberOfBlanks > 0) {
                putchar('#');
                /* Increase the position */
                position++;
                /* Decrease the numberOfBlanks */
                numberOfBlanks--;
            }
        } 
        /* If inputCharacter = \n */
        else if (inputCharacter == '\n') 
        {
            /* print the enter */
            putchar(inputCharacter);
            /* Reset the position */
            position = 1;
        } 
        else 
        {   
            /* print inputCharacter */
            putchar(inputCharacter);
            /* Increment the position */
            position++;
        }
    }

    return 0;
}