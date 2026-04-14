/**********************************************************************
    Program to print Celcius Fahr table for 0, 20, 40....
**********************************************************************/
#include <stdio.h>

int main()
{
    float fahr, celcius;
    int upper, lower, steps;
    lower = 0;
    upper = 300;
    steps = 20;
    celcius = lower;

    printf("Celcius     Fahrenhiet\n");
    printf("-------     ----------\n");
    
    while(celcius <= upper)
    {
        fahr = (9.0/5.0) * celcius + 32;
        printf("%3.0f\t\t%6.1f\n", celcius, fahr);
        celcius += steps;
    }
}