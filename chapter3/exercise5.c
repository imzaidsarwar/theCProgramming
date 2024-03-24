/*
    Exercise 3-5
    Write the function itob(n,a,b) that converts the integer n into a
    base b character representation in the string s. In particular, 
    itob(n,s,16) formats n as a hexadecimal integer in s.
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
void itob(int n, char s[], int b) 
{
    int i, sign;
    sign = n;
    i = 0;
    do 
    {
        /* Generate digits in reverse order */
        s[i++] = abs(n % b) + '0';

    } while ((n /= b) != 0); /* Get next digit delete it */

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
    itob(number, str,16);
    /* print the str */
    printf("%s", str);
    return 0;
}