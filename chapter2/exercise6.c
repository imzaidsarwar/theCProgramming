/*
    Exercise 2-6
    Write a function setbits(x,p,n,y) that returns x with the n bits
    that begin at position p set to the rightmost n bits of y, leaving
    the others unchanged.
*/
#include<stdio.h>
int setBits(int x, int p, int n, int y)
{
    return 
    (x & ~(~(~0 << n) << (p + 1 - n)) 
    | 
    (y & (~(~0 << n)) << (p + 1 - n)));
}
int main()
{
    /* print the return value of setBits */
    printf("%d",setBits(12, 3, 2, 57));
    return 0;
}
