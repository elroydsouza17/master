#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter a number\n");
    long long int number;
    scanf("%lld", &number);
    int isPrime;


    if (n )

    for (long long int factor = number; factor > 0; factor -= 2)
    {
        if(number % factor == 0)
        {   
            isPrime = 1; 
            for (long long int j = 2; j < factor; j++)
            {
                if(factor % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }
        if(isPrime)
        {
            printf("The largest Prime factor of %lld is %lld\n", number, factor);
            break;
        }
    }

}


