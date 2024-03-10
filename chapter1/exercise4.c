/*
    Exercise 1-4
    Write a program to print the corresponding celsius to fahrenheit table
*/
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
main()
{
    float celsius;
    celsius = LOWER;
    while(celsius <= UPPER)
    {
        // %d    |   print as decimal integer
        printf("%d\n",(((9.0/5.0) * celsius ) + 32));
        // %6d   |   print as decimal integer, at least 6 character wide
        printf("%6d\n",(((9.0/5.0) * celsius ) + 32));
        // %f    |   print as floating point
        printf("%f\n",(((9.0/5.0) * celsius ) + 32));
        // %6f   |   print as floating point, at least 6 character wide
        printf("%6f\n",(((9.0/5.0) * celsius ) + 32));
        // %.2f  |   print as floating point, 2 character after decimal point
        printf("%.2f\n",(((9.0/5.0) * celsius ) + 32));
        // %6.2f |   print as floating point, at least 6 wide and 2 after decimal point
        printf("%6.2f\n",(((9.0/5.0) * celsius ) + 32));
        // Increment the fahr
        celsius = celsius + STEP;
    }
}
