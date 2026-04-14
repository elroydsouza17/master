#include <stdio.h>

int reverseNumber(int number);

int main()
{
    int palindrome = 0;
    int digits;
    int lower = 1;
    printf("Enter the largest palindrome to be found for which digit number\n");
    scanf("%d",&digits);

    for (int i = 0; i < digits; i++)
    {
        lower = lower * 10;
    }


    for (int i = lower / 10; i < lower; i++)
    {
        for (int j = lower / 10; j < lower; j++)
        {
            int product = i * j;
            int reverse = reverseNumber(product);
            if ((product == reverse) && (product > palindrome))
            {
                palindrome = product;
            }
        }
    }

    printf("Largest palindrome is : %d\n", palindrome);
}

int reverseNumber(int number)
{   
    int reverseNumber = 0;
    while(number != 0)
    {
        reverseNumber *= 10;
        reverseNumber = reverseNumber + (number % 10);
        number = number / 10;
    }

    return reverseNumber;
}