/*
    Exercise 3-6
    Write a version of itoa that accepts three arguments instead of two.
    The third arugument is a minimum field width; the converted number
    must be padded with blanks on the left if necessary to make it wide
    enough.
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
void itoa(int n, char s[], int w) 
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
    if (sign < 0)
        s[i++] = '-';

    while (i < w)
    {
        s[i++] = ' ';
    }
    /* Store null character at the end */
    s[i] = '\0';
    /* call the reverse function */
    reverse(s);
}

int main(void) {
    int number;
    int width = 10;
    char str[MAXLINE];
    number -343565;;
    printf("Integer %d printed as\n String:", number);
    /* Call the itoa */
    itoa(number, str,width);
    /* print the str */
    printf("%s", str);
    return 0;
}