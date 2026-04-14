/***************************************************************************
    Program to print Fahr Celcius table for 0, 20, 40.... using FOR loop
***************************************************************************/
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main()
{
    int fahr;

    printf("Fahrenhiet    Celcius \n");
    printf("-------     ----------\n");
    
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
    
    printf("\n\n");
    printf("Reverse table from 300 to 0\n");
    printf("\n\n");
    
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    {
        printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}