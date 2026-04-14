#include <stdio.h>

int evenSumOfFibonacci(int num);

int main()
{
    int maxValue = 4000000;
    printf("Even sum is : %d\n", evenSumOfFibonacci(maxValue));
    return 0;
}

int evenSumOfFibonacci(int num)
{
    int firstTerm = 1;
    int secondTerm = 2;
    int nextTerm = firstTerm + secondTerm;
    int evenSum = 0;
    int count = 3;
    while(nextTerm < num)
    {
         if (nextTerm % 2 == 0) evenSum += nextTerm;

        printf("%dth term is : %d\n", count, nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        nextTerm = firstTerm + secondTerm;
        count++;
    }

    return evenSum;
}


