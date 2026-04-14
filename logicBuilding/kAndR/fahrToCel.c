/**********************************************************************
    Program to print fahrenheint Celcius table for 0, 20, 40....
**********************************************************************/
#include <stdio.h>

int main()
{
    float fahr, celcius;
    int upper, lower, steps;
    lower = 0;
    upper = 300;
    steps = 20;
    fahr = lower;

    printf("Fahrenheit     Celcius\n");
    printf(" -------        ------\n");
    
    while(fahr <= upper)
    {
        celcius = (5.0/9.0) * fahr - 32;
        printf("%3.0f\t\t%6.2f\n", fahr, celcius);
        fahr += steps;
    }
}