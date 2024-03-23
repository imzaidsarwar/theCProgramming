/*
    Exercise 2-8
    Write a function rightrot(x,n) that returns the value of the integer
    x rotated to the right by n bit position.
*/
#include<stdio.h>
int wordLength()
{
    int x = ~0;
    int i;
    for(i=1; (x = x>>1)>0;i++)
    {
        ;
    }
    return i;
}
int rightRoT(int x, int n)
{   
    x = x << n;
    int rbit = x >> (wordLength() - n);
    x = x | rbit;
    return x;
}
int main()
{
    /* print return value by rightRoT */
    printf("%d",rightRoT(5,3));
    return 0;
}