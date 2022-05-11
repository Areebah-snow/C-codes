#include <stdio.h>
#include <stdlib.h>

float circle( float a )
{
    float area;
    area=( 3.14*(a*a));
    printf("The area of the circle with parameter %.1f is %.1f", a, area);
}

int rectangle(int rectanglelength, int rectanglebreadth)
{
   int result= rectanglelength * rectanglebreadth;
   printf("\nArea of rectangle is %d", result);
}