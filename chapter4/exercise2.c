/*
    Exercise 4-2
    Extend atof to handle scientific notaion of the form 123.45e-6
*/
#include<stdio.h>
#include <ctype.h>
#define MAXLINE 1000
int power(int base, int exp) {
    int power;
    power = 1;
    while (exp-- > 0)
        power *= base;

    return power;
}
/* Convert string s to double */
double atof(char s[]) {
    double val, pow;
    int sign, i, esign, exp;
    int power(int base, int exp);

    for (i = 0; isspace(s[i]); i++);

    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
        i++;

    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');

    if (s[i] == '.')
        i++;

    for (pow = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        pow *= 10.0;
    }

    if (s[i] == 'e' || s[i] == 'E')
        i++;
    if (s[i] == '+' || s[i] == '-') {
        esign = s[i];
        i++;
    }

    for (exp = 0; isdigit(s[i]); i++)
        exp = 10.0 * exp + (s[i] - '0');

    if (esign == '-')
        return sign * (val / pow) / power(10, exp);
    else

        return sign * (val / pow) * power(10, exp);
}
int atoi(char s[])
{
    double atof(char s[]);
    return (int)atof(s);
}
int getLine(char str[])
{
    /* Take the input character */
    int inputChar;
    /* represent the index of array as well as length of line */
    int index;
    /* Getting input and store the input into 
        str if condition is satisfied
    */
    for(index = 0; index < MAXLINE-1 
        && 
        (inputChar = getchar())!= EOF
        && 
        inputChar !='\n';
        index++)
    {
        /* Store the input character into str1 */
        str[index] = inputChar;
    }
    if(inputChar == '\n')
    {
        /* Store the input character into str */
        str[index] = inputChar;
        /* Increment the index OR length */
        index++;
    }
    /* Store null character in last of str*/
    str[index] = '\0';
    /* return length of input line*/
    return index;
}
int main() {
    char str[MAXLINE];
    getLine(str);
    printf("%f", atof(str));

    return 0;
}