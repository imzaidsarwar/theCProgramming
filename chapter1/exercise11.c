/*
    How would you test the word count program? What kind of input are most
    likely to uncover bugs if there are any?
*/
#include <stdio.h>

#define IN 1
#define OUT 0
/*
    Count lines, words, and character int input
*/
main()
{
    int inputCharacter, newLine, nw, nc, state;
    state = OUT;
    newLine = nw = nc = 0;
    while((inputCharacter = getchar()) != EOF)
    {
        ++nc;
        if(inputCharacter = '\n')
        {
            ++newLine;
        }
        if(inputCharacter == ' ' || inputCharacter == '\n' || inputCharacter == '\t')
        {
            state = OUT;
        }
        else if(state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n",newLine,nw,nc);
}

/*
    Testing the word count program involves, giving three kinds of inputs.
    1. Valid Inputs.
    2. Boundary Condition Inputs.
    3. Invalid Inputs.
*/