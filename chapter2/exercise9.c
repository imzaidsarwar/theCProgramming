/*
    Exercise 2-9
    In a two's complement number system, x&=(x-1) deletes the rightmost
    1-bit in x. Explain why. Use this observation to write a faster 
    version of bitcount.
*/
#include<stdio.h>
int bitCount(unsigned x) {
    int b;
    /* Count the number of 1-bits in its integer */
    for (b = 0; x != 0; x &= x - 1)
    {
        ++b;
    }
    return b;
}
int main()
{   
    /* Print the return value of bitCount*/
    printf("%d",bitCount(11));
    return 0;
}