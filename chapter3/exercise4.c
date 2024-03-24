/*
    Exercise 3-4
    In a two's complement number representation, our version of itoa does
    not handle the largest -ve number, that is, the value of n equal to 
    -(2^wordsize-1). Explain why not. Modify it to print that value
    correctly, regardless of the machine on ehich it runs.
*/
#include<stdio.h>
#include<string.h>
#define abs(x) ((x) > 0 ? (x) : -(x))
#define MAXLINE 1000
/* Reverse the string */
void reverse(char s[]) 
{
    int c, i, j;
    i = 0;
    j = strlen(s) - 1;
    for (; i < j; i++, j--)
    {
        c = s[i], s[i] = s[j], s[j] = c;
    }
        
}
/* Convert n to character in s */
void itoa(int n, char s[]) 
{
    int i, sign;
    sign = n;
    i = 0;
    do 
    {
        /* Generate digits in reverse order */
        s[i++] = abs(n % 10) + '0';

    } while ((n /= 10) != 0); /* Get next digit delete it */

    if (sign < 0)
    {
        s[i++] = '-';
    }
    /* Store null character at the end */
    s[i] = '\0';
    /* call the reverse function */
    reverse(s);
}

int main(void) {
    int number;
    char str[MAXLINE];
    /* Minimum integer */
    number = -2147483648;
    printf("Integer %d printed as\n String:", number);
    /* Call the itoa */
    itoa(number, str);
    /* print the str */
    printf("%s", str);
    return 0;
}


