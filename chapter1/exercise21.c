/*
    Exercise 1-21
    Write a program entab that replaces strings of blanks by the proper
    number of blanks to achieve the same spacing. Use the same tab stops
    as for detab. When either a tabs or a single blank would suffice to
    reach to tab stop, which should be given preference? 
*/
#include<stdio.h>
#define TAB 8

int main(void) {
    int numberOfBlanks = 0;
    int numberOfTabs = 0;
    int position = 1;
    int inputCharacter;

    for (position = 1; (inputCharacter = getchar()) != EOF; position++)
    {
        if (inputCharacter == ' ') 
        {
            if ((position % TAB) != 0)
            {
                numberOfBlanks++;
            }
            else 
            {
                numberOfBlanks = 0;
                numberOfTabs++;
            }
        } 
        else 
        {
            for (; numberOfTabs > 0; numberOfTabs--)
            {
                putchar('\t');
            }
            if (inputCharacter == '\t')
            {
                numberOfBlanks = 0;
            }
            else
            {
                for (; numberOfBlanks > 0; numberOfBlanks--)
                {
                    putchar(' ');
                }
            }
            putchar(inputCharacter);

            if (inputCharacter == '\n')
            {
                position = 0;
            }
            else if (inputCharacter == '\t')
            {
                position = position + (TAB - (position - 1) % TAB) - 1;
            }
        }
    }
    return 0;
}
