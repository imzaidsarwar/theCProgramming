/*
    Table
    %d    |   print as decimal integer
    %6d   |   print as decimal integer, at least 6 character wide
    %f    |   print as floating point
    %6f   |   print as floating point, at least 6 character wide
    %.2f  |   print as floating point, 2 character after decimal point
    %6.2f |   print as floating point, at least 6 wide and 2 after decimal point
    Modify the temperature conversion program to print
    a heading above table.
*/

#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
main()
{
    float fahr;
    fahr = LOWER;
    while(fahr <= UPPER)
    {
        // %d    |   print as decimal integer
        printf("%d\n",((5.0/9.0) * (fahr - 32.0)));
        // %6d   |   print as decimal integer, at least 6 character wide
        printf("%6d\n",((5.0/9.0) * (fahr - 32.0)));
        // %f    |   print as floating point
        printf("%f\n",((5.0/9.0) * (fahr - 32.0)));
        // %6f   |   print as floating point, at least 6 character wide
        printf("%6f\n",((5.0/9.0) * (fahr - 32.0)));
        // %.2f  |   print as floating point, 2 character after decimal point
        printf("%.2f\n",((5.0/9.0) * (fahr - 32.0)));
        // %6.2f |   print as floating point, at least 6 wide and 2 after decimal point
        printf("%6.2f\n",((5.0/9.0) * (fahr - 32.0)));
        // Increment the fahr
        fahr = fahr + STEP;
    }
}