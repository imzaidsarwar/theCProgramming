/*
    Exerice 2-3
    Write the function htoi(s), which converts a string of hexadecimal
    digits (including an optional 0x or 0X) into its equivalent integer
    value. The allowable digits are 0 through 9, a through f, and A
    through F.
*/
#include <stdio.h>

#define MAXLINE 1000
#define BASE 16
unsigned int htoi(const char s[], int len) 
{
    int digit;
    int power = 1;
    unsigned int result = 0;
    int end_index = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        end_index = 2;
    }

    for(int i=len-1; i>=end_index; i--) {
        if (s[i] >= '0' && s[i] <= '9') {
            digit = (s[i] - '0');
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            digit = (s[i] - 'a') + 10;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            digit = (s[i] - 'A') + 10;
        }
        result += digit * power;
        power *= BASE;
    }

    return result;
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
int main() 
{
    char line[MAXLINE];
    int len;
    unsigned int value;
    len = getLine(line);
    value = htoi(line, len);
    printf("The value of %s is %u \n", (char *) line, value);
    return 0;
}