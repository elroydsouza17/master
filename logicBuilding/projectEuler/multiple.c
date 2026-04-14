#include <stdio.h>
int sumOfMultiples(int multipleOf, int maxNumber);

int main() 
{
    int number = 1000;
    int sum = sumOfMultiples(3, number) + sumOfMultiples(5, number) - sumOfMultiples(15, number);
    printf("sum of multiples of 3 & 5 and below number %d is %d\n", number, sum);
    
}

int sumOfMultiples(int multipleOf, int maxNumber)
{

    int sum = 0;
    for (int i = multipleOf; i < maxNumber; i++)
    {
        if((i % multipleOf) == 0)
        {
            sum += i;
        }
    }

    return sum;
}