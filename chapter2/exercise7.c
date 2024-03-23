/*
    Exercise 2-7
    Write a function invert(x,p,n) that returns x with the n bits that
    begin at position p invert (i.e., 1 changed into 0 and vice versa),
    leaving the others umchanged.
*/
#include<stdio.h>
int invert(int x, int p, int n)
{
    /* invert the bits */
    return x ^ (~(~0 << n) << (p + 1 - n));
}
int main()
{
    /* print the return value of invert */
    printf("%d",invert(8, 3, 3));
    return 0;
}