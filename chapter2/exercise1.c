/*
    Exercise 2-1
    Write a program to determine the ranges of char, short, int, and long
    variables, both signed and unsigned, by printing appropriate values
    from standard headers and by direct computation. Harder if you 
    compute them: determine the ranges of the various floating-point 
    types.
*/
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    /* These values are printed froom standard headers */
    printf("%d\n",CHAR_MAX);
    printf("%d\n",INT_MAX);
    printf("%d\n",INT_MIN);
    printf("%ld\n",LONG_MAX);
    printf("%ld\n",LONG_MAX);
    printf("%d\n",SCHAR_MAX);
    printf("%d\n",SCHAR_MAX);
    printf("%d\n",SHRT_MAX);
    printf("%d\n",SHRT_MAX);
    printf("%d\n",UCHAR_MAX);
    printf("%d\n",UCHAR_MAX);
    printf("%lu\n",ULONG_MAX);
    printf("%d\n",USHRT_MAX);
    return 0;
}