/*
    Exercise 4-5
    Add access to library functions like sin, exp, and pow.
    See <math.h> in Appendix B, Section 4.
*/

#include <stdio.h>
#include <math.h>
#define ANGLE 0.524 /* 30 degree is equal to 0.524 radian*/
#define BASE 2 
#define POWER 5
main()
{
    printf("sin(0.524) = %lf\n",sin(ANGLE));
    printf("cos(0.524) = %lf\n",cos(ANGLE));
    printf("tan(0.524) = %lf\n",tan(ANGLE));
    
    /* asin, acos, atan is for inverse */
    printf("asin(0.524) = %lf\n",asin(ANGLE));
    printf("acos(0.524) = %lf\n",acos(ANGLE));
    printf("atan(0.524) = %lf\n",atan(ANGLE));

    /* Exponent */
    printf("exp(0.524) = %lf\n",exp(ANGLE));

    /* Power */
    printf("pow(2,5) = %lf\n",pow(BASE,POWER));

}
